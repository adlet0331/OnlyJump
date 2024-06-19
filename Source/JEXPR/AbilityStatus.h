// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "AbilityStatus.generated.h"

/**
 * 
 */
UCLASS()
class JEXPR_API UAbilityStatus : public UUserDefinedStruct
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameState")
	int JumpCountInAir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameState")
	bool CanCharge1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameState")
	bool CanCharge2;
};
