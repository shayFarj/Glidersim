#pragma once
#include "Factor.h"
#include "LiftFactor.h"
//Using SI units
class DragFactor : public Factor
{
public:
	DragFactor(double osswald,double drag_min, double AR);
	~DragFactor();

	virtual double calc(double lift_co);
private:
	double osswald;
	double drag_min;
	double AR; // aspect ratio

};

