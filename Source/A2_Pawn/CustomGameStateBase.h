// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "CustomGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class A2_PAWN_API ACustomGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
public:
	ACustomGameStateBase();
	~ACustomGameStateBase() = default;
	
};
