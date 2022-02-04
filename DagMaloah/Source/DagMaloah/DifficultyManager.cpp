#include "DifficultyManager.h"

// Sets default values
ADifficultyManager::ADifficultyManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADifficultyManager::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADifficultyManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADifficultyManager::EasyDifficulty(TEnumAsByte<Difficulty>& Diff)
{
	Diff = Easy;
}

void ADifficultyManager::MediumDifficulty(TEnumAsByte<Difficulty>& Diff)
{
	Diff = Medium;
}
void ADifficultyManager::HardDifficulty(TEnumAsByte<Difficulty>& Diff)
{
	Diff = Hard;
}
