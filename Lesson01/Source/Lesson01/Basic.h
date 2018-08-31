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

	//	�������
	//	EditAnywhere -> ��ʾ���κεط�
	UPROPERTY(EditAnywhere, Category = "Basic")						//	basicID ������ʾ����ͼ����ǲ����Ա���ͼ����	
		int32 basicID;
	
	//	BlueprintReadWrite -> �̳е���ͼ����ԶԱ������ж�д
	UPROPERTY(BlueprintReadWrite, Category = "Basic")				//	basicName ��������ͼ���汻���ö�д�����ǲ���ʾ����ͼ��
		FString basicName;

	//	BlueprintReadOnly -> �̳е���ͼ��ֻ���Զ�ȡ�������Ըı���
	UPROPERTY(BlueprintReadOnly, Category = "Basic")				//	basicLength ��������ͼ��������������ǲ��ܸ�������Ҳ������ʾ����ͼ��
		float basicLength;

	//	VisibleAnywhere -> ֻ����ʾ�����������Ը���
	UPROPERTY(VisibleAnywhere, Category = "Basic")					//	characterName ������ʾ����ͼ����ǲ��ܶ������ж�д
		FString characterName = TEXT("ChracterName");

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//	����һ�����������Բ���Basic.cpp ���渲д������д��ζ��û�з����壬���Ա��̳У���������д
	void BasicFunCA();			

	//	BlueprintCallable -> ����ͼ������ԶԷ������е��ã�ע�⣺����Ҫ��Basic.cpp ���渲д��������벻ͨ��
	UFUNCTION(BlueprintCallable, Category = "Basic")
		void BasicFunCB();
	
};
