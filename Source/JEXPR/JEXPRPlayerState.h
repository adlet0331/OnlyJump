// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "JEXPRPlayerState.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class JEXPR_API AJEXPRPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	/** Gameplay Ability System. Ability를 사용하기 위해서 필요함 */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Abilities")
	UAbilitySystemComponent* AbilitySystemComponent;

	//~ IAbilitySystemInterface 시작
	/** Return Ability System Component */
	UFUNCTION(BlueprintCallable, Category=JEXPRPlayerState)
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//~ IAbilitySystemInterface 끝

	/** Init AbilitySystemComponent. 오버라이딩 필요 */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = JEXPRPlayerState)
	void InitAbilitySystem();
};
