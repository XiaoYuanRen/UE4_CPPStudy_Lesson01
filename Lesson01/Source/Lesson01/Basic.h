// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Basic.generated.h"

UCLASS()
class LESSON01_API ABasic : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasic();

	//	定义变量
	//	EditAnywhere -> 显示在任何地方
	UPROPERTY(EditAnywhere, Category = "Basic")						//	basicID 可以显示在蓝图里，但是不可以被蓝图调用	
		int32 basicID;
	
	//	BlueprintReadWrite -> 继承的蓝图类可以对变量进行读写
	UPROPERTY(BlueprintReadWrite, Category = "Basic")				//	basicName 可以在蓝图里面被调用读写，但是不显示在蓝图里
		FString basicName;

	//	BlueprintReadOnly -> 继承的蓝图类只可以读取，不可以改变它
	UPROPERTY(BlueprintReadOnly, Category = "Basic")				//	basicLength 可以在蓝图里面调用它，但是不能更改它，也不会显示在蓝图里
		float basicLength;

	//	VisibleAnywhere -> 只是显示出来，不可以更改
	UPROPERTY(VisibleAnywhere, Category = "Basic")					//	characterName 可以显示在蓝图里，但是不能对它进行读写
		FString characterName = TEXT("ChracterName");

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//	定义一个方法，可以不在Basic.cpp 里面覆写，不覆写意味着没有方法体，可以被继承，被子类重写
	void BasicFunCA();			

	//	BlueprintCallable -> 在蓝图里面可以对方法进行调用；注意：必须要在Basic.cpp 里面覆写，否则编译不通过
	UFUNCTION(BlueprintCallable, Category = "Basic")
		void BasicFunCB();
	
};
