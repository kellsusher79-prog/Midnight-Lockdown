#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MLProjectile.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class UProjectileMovementComponent;

UCLASS()
class MIDNIGHTLOCKDOWN_API AMLProjectile : public AActor
{
	GENERATED_BODY()

public:
	AMLProjectile();

protected:
	UPROPERTY(VisibleAnywhere, Category = "Projectile")
	USphereComponent* Collision;

	UPROPERTY(VisibleAnywhere, Category = "Projectile")
	UStaticMeshComponent* ProjectileMesh;

	UPROPERTY(VisibleAnywhere, Category = "Projectile")
	UProjectileMovementComponent* ProjectileMovement;
};