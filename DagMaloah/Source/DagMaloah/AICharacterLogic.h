#include "CoreMinimal.h"
#include "AIDataAsset.h"
#include <map>
#include "UObject/UObjectGlobals.h"
#include "GameFramework/Character.h"
#include "RaycastHandler.h"
#include "AICharacterLogic.generated.h"

class BaseState;
class ADollClass;

UENUM(BlueprintType, Category = "My Enum")
enum StateTypeEnum {
    Standing_State  UMETA(DisplayName = "State Type: Standing"),
    Move_Forward_State UMETA(DisplayName = "State Type: Moving Forward"),
    Decision_State UMETA(DisplayName = "State Type: Decision "),
    Death_State UMETA(DisplayName = "State Type: Death/Losing "),
    Winning_State UMETA(DisplayName = "State Type: Winning "),

};

UCLASS()
class DAGMALOAH_API AAICharacterLogic : public ACharacter
{
    GENERATED_BODY()

public:
    //-----------------------------------------------------------------------------------------------
    //Constructor
    AAICharacterLogic();


private:
    //-----------------------------------------------------------------------------------------------
    //Fields
    UPROPERTY(EditAnywhere)
        UAIDataAsset* _data;
        RaycastHandler* _rayCastHandler;
    UPROPERTY(EditAnywhere)
        ADollClass* _dollReference = nullptr;
    TMap< TEnumAsByte<StateTypeEnum>, BaseState* > _stateMap;
    BaseState* _currentState = nullptr;
    bool _isAlive = false;
    bool _showRaycast = false;

    //-----------------------------------------------------------------------------------------------
    // Functions
    void InitAiParameters();
    void DestroyMapElements();
public:
    //-----------------------------------------------------------------------------------------------
    // Event
    UFUNCTION(BlueprintImplementableEvent, Category = "Events")
        void OnAIDeath();
    UFUNCTION(BlueprintImplementableEvent, Category = "Events")
        void OnAIWin();

    UFUNCTION(BlueprintImplementableEvent, Category = "Events")
        void OnInitAI();
    //-----------------------------------------------------------------------------------------------
    //Propeties
    bool GetAlive() { return _isAlive; }
    void SetAlive(bool isPlaying);
    bool ToShowRayCast() { return _showRaycast; }

    ADollClass* GetDollRef() { return _dollReference; }
    AController* GetController() { return Controller; }
    UAIDataAsset* GetAIDataAsset() { return _data; }

    RaycastHandler* GetRayCastHandler();
    UFUNCTION(BlueprintCallable)
        void SetDataAsset(UAIDataAsset* data) {
       // if(_data)
       //     UE_LOG(LogTemp, Warning, TEXT("My Previous Data Type is "), _data->Name)
       //
       // if (data)
       //     UE_LOG(LogTemp, Warning, TEXT("Setting Data Asset! $%d"), data->Name)
       // else
       //     UE_LOG(LogTemp, Warning, TEXT("Data Is Null!"))
        _data = data;
    }
    UFUNCTION(BlueprintCallable)
        void SetDollReference(ADollClass* dollRef) { _dollReference = dollRef; }

    FVector GetWinDestination();
    //-----------------------------------------------------------------------------------------------
    //Fucntions
    bool IsDollSeeingMe();
    UFUNCTION(BlueprintCallable)
        void OnInitAIEvent();
    UFUNCTION(BlueprintCallable)
        void MoveToState(TEnumAsByte<StateTypeEnum> state);




    //-----------------------------------------------------------------------------------------------
    // UE4 functions
    virtual void BeginDestroy() override;
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};