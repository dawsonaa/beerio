// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "beerioPawn.h"
#include "beerioSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class BEERIO_API AbeerioSportsCar : public AbeerioPawn
{
	GENERATED_BODY()
	
public:

	AbeerioSportsCar();
};
