// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EveryDCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class UNREALEVERYDAYS_API UEveryDCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
	// Movement functions broken out based on owner's network Role.
	// TickComponent calls the correct version based on the Role.
	// These may be called during move playback and correction during network updates.
	//

	/** Perform movement on an autonomous client */
	virtual void PerformMovement(float DeltaTime)override;
	
	
};
