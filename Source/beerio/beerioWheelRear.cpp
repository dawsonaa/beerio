// Copyright Epic Games, Inc. All Rights Reserved.

#include "beerioWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UbeerioWheelRear::UbeerioWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}