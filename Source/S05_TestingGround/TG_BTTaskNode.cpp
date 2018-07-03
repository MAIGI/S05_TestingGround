// Fill out your copyright notice in the Description page of Project Settings.

#include "TG_BTTaskNode.h"

EBTNodeResult::Type UTG_BTTaskNode::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	auto BlackboardCom = OwnerComp.GetBlackboardComponent();
	auto Index = BlackboardCom->GetValueAsInt(IndexKey.SelectedKeyName);
	UE_LOG(LogTemp,Warning,TEXT("Waypoint index : %i"),Index)
	return EBTNodeResult::Succeeded;
}

void UTG_BTTaskNode::OnTaskFinished(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, EBTNodeResult::Type TaskResult)
{

}
