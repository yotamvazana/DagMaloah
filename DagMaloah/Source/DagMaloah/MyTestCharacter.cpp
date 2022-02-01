// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTestCharacter.h"
using namespace std;
// Sets default values
AMyTestCharacter::AMyTestCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
AMyTestCharacter::~AMyTestCharacter()
{
	//ADollClass* c = Cast <ADollClass>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	//c->LightChange.RemoveDynamic(this, &AMyTestCharacter::Test);
}

// Called when the game starts or when spawned
void AMyTestCharacter::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void AMyTestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyTestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyTestCharacter::Test(bool b)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "ColorCangeEvent, isGreen = " + b);
}

void AMyTestCharacter::DOSomthingWhenEventCall(bool isRed)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, isRed ? "isRed" : "isGreen");
}

