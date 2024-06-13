// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CGameInstance.generated.h"

UCLASS()
class MMB_API UCGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
	int32 SelectedSaveSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
	TArray<uint8> TempSaveFileAddress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
	UClass* SpawnMonsterClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
	int32 BattleQuestRowIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Settings")
	float StartLevelClock;

	virtual void Init() override;
	virtual void Shutdown() override;
};
