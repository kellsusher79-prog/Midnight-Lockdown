#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MLPlayerCharacter.generated.h"

class AMLProjectile;

UCLASS(Blueprintable)
class MIDNIGHTLOCKDOWN_API AMLPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMLPlayerCharacter();

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void FireProjectile();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<AMLProjectile> ProjectileClass;
};