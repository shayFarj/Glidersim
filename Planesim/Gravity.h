#pragma once
#include "ForceApplier.h"
class Gravity : public ForceApplier
{
public:
	Gravity(Vector2 gVector);
	~Gravity();
	virtual Vector2 calcForce();
private:
	Vector2 gVector;

};

