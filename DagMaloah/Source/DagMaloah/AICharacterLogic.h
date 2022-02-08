#include "CoreMinimal.h"
#include "AIDataAsset.h"
#include <map>
#include "UObject/UObjectGlobals.h"
#include "GameFramework/Character.h"
#include "RaycastHandler.h"
#include "CSVHandler.h"
#include "AICharacterLogic.generated.h"
class BaseState;
class ADollClass;

struct CSVData {
public:
    int ID = 0;
    bool isPlayer = false;
    bool isDead = false;
    float time = 0.f;
    bool isWon = false;
};

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
    static int AICount;

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
   
    CSVData _csvData;
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
    
    //getters
    FVector GetWinDestination();
    bool ToShowRayCast() { return _showRaycast; }
    bool GetAlive() { return _isAlive; }
    ADollClass* GetDollRef() { return _dollReference; }
    AController* GetController() { return Controller; }
    UAIDataAsset* GetAIDataAsset() { return _data; }
    RaycastHandler* GetRayCastHandler(){ return _rayCastHandler; }

    // setters
    void SetAlive(bool isPlaying);
    UFUNCTION(BlueprintCallable)
        void SetDataAsset(UAIDataAsset* data) { _data = data; }
    UFUNCTION(BlueprintCallable)
        void SetDollReference(ADollClass* dollRef) { _dollReference = dollRef; }

    //-----------------------------------------------------------------------------------------------
    //Fucntions
    bool IsDollSeeingMe();
    UFUNCTION(BlueprintCallable)
        void OnInitAIEvent();
    UFUNCTION(BlueprintCallable)
        void MoveToState(TEnumAsByte<StateTypeEnum> state);

    UFUNCTION(BlueprintCallable)
        void UploadData();



    //-----------------------------------------------------------------------------------------------
    // UE4 functions
    virtual void BeginDestroy() override;
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};

