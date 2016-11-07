// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "VectorSelf.generated.h"

UCLASS()
class SPIKE16_API AVectorSelf : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AVectorSelf();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorSelf")
		int getX();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorSelf")
		int getY();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorSelf")
		int getZ();

	UFUNCTION(BlueprintCallable,  Category = "VectorSelf")
		void setX(int arg);

	UFUNCTION(BlueprintCallable, Category = "VectorSelf")
		void setY(int arg);

	UFUNCTION(BlueprintCallable, Category = "VectorSelf")
		void setZ(int arg);


private:
	//UPROPERTY(EditAnywhere)
	int x;

//	UPROPERTY(EditAnywhere)
		int y;
	//UPROPERTY(EditAnywhere)
		int z;
	
};
