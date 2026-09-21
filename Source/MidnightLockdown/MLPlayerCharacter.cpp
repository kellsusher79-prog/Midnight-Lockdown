#include "MLPlayerCharacter.h"
#include "MLProjectile.h"

AMLPlayerCharacter::AMLPlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AMLPlayerCharacter::FireProjectile()
{
	if (!ProjectileClass || !Controller)
	{
		return;
	}

	FVector ViewLocation;
	FRotator ViewRotation;

	Controller->GetPlayerViewPoint(ViewLocation, ViewRotation);

	FVector SpawnLocation =
		ViewLocation + (ViewRotation.Vector() * 100.0f);

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = this;

	GetWorld()->SpawnActor<AMLProjectile>(
		ProjectileClass,
		SpawnLocation,
		ViewRotation,
		SpawnParams
	);
}