// Copyright Epic Games, Inc. All Rights Reserved.

#include "beerioWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UbeerioWheelFront::UbeerioWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}