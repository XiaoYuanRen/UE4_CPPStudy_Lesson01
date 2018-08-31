// Fill out your copyright notice in the Description page of Project Settings.

#include "BasicActor.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"

// Sets default values
ABasicActor::ABasicActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABasicActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABasicActor::CallBasic()
{
	if (basic == nullptr)
	{
		basic = NewObject<ABasic>();	//	实例化一个对象
		UE_LOG(LogTemp, Log, TEXT("basic is null ........  "));
	}
	basic->BasicFunCA();
}

