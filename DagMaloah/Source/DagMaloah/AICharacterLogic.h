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
    bool isAlive;

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

    //-----------------------------------------------------------------------------------------------
    //Propeties
    bool GetAlive() { return isAlive; }
    void SetAlive(bool isPlaying);

    ADollClass* GetDollRef() { return _dollReference; }
    AController* GetController() { return Controller; }
    UAIDataAsset* GetAIDataAsset() { return _data; }
    RaycastHandler* GetRayCastHandler() { return _rayCastHandler; }
    UFUNCTION(BlueprintCallable)
        void SetDollReference(ADollClass* dollRef) { _dollReference = dollRef; }

    FVector GetWinDestination();
    //-----------------------------------------------------------------------------------------------
    //Fucntions
    bool IsDollSeeingMe();

    UFUNCTION(BlueprintCallable)
        void MoveToState(TEnumAsByte<StateTypeEnum> state);




    //-----------------------------------------------------------------------------------------------
    // UE4 functions
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};