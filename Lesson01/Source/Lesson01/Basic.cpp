// Fill out your copyright notice in the Description page of Project Settings.

#include "Basic.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"

// Sets default values
ABasic::ABasic()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABasic::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABasic::BasicFunCA()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("I am Basic's BasicFunCA"));
	}
}

void ABasic::BasicFunCB()
{
	UE_LOG(LogTemp, Log, TEXT("This is log message ........."));									//	白色正常信息
	UE_LOG(LogTemp, Warning, TEXT("This is warning message ----------"));							//	黄色警告信息
	UE_LOG(LogTemp, Error, TEXT("This is warning Error ++++++++"));									//	红色错误信息

	if (GEngine)																					//	输出到屏幕上的信息
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("This is basic.cpp"));		
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT("World delta for current frame equals %f")));
	}

}

