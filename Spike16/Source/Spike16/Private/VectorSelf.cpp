// Fill out your copyright notice in the Description page of Project Settings.

#include "Spike16.h"
//#include "VectorSelf.h"
#include "../Public/VectorSelf.h"


// Sets default values
AVectorSelf::AVectorSelf()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVectorSelf::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVectorSelf::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

int AVectorSelf::getX()
{
	return x;
}

int AVectorSelf::getY()
{
	return y;
}

int AVectorSelf::getZ()
{
	return z;
}

void AVectorSelf::setX(int arg)
{
	x = arg;
}

void AVectorSelf::setY(int arg)
{
	y = arg;
}

void AVectorSelf::setZ(int arg)
{
	z = arg;
}



