#include "Gravity.h"
#include "physStructs.h"

//Using SI units

Gravity::Gravity(Vector2 gVector) : gVector(gVector)
{

}

Vector2 Gravity::calcForce() 
{
	return this->gVector;
}