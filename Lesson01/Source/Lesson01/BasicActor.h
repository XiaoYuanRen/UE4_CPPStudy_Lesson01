// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Basic.h"
#include "BasicActor.generated.h"

UCLASS()
class LESSON01_API ABasicActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasicActor();
	UPROPERTY(EditAnywhere, Category = "Basic")
	ABasic* basic;	//	创建对象，首先要（include）引入这个对象类

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Basic")
		void CallBasic();
	
};
