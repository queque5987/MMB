// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "CBTTaskFindPatrolPosFly.generated.h"

UCLASS()
class MMB_API UCBTTaskFindPatrolPosFly : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UCBTTaskFindPatrolPosFly();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	//virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

};
