#pragma once
#include "ForceApplier.h"
//Using SI units
class Wing : public ForceApplier
{
public:
	Wing();
	~Wing();

	virtual Vector2 calcForce(double streamAng, double vel);
	virtual double calcMoment(double streamAng);

private:
	double d_aeropivot;
	double chord;
	
	const double osswald;
	const double lambda; //wing tip devided by wing root
	const double area; // projection of wing's area
	const double AR; // aspect ratio


};

