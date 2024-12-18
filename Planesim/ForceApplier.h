#pragma once
#include "physStructs.h"
//using SI units
class ForceApplier abstract
{
public:
	ForceApplier();
	~ForceApplier();

	virtual Vector2 calcForce();
	virtual double calcMoment();



};

