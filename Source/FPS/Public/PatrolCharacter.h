// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrolCharacter.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API APatrolCharacter : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()


public:
	UPROPERTY(EditInstanceOnly, Category = "Patrol Route")
		TArray<AActor*> PatrolPointsCPP;
	
	
};
