#pragma once
#include "physStructs.h"
#include "vector"
// using SI units
class RigidBody abstract
{
public:
	RigidBody(double inertia, double mass);
	~RigidBody();
	virtual std::vector<Frame> createFrames(const Frame& initFrame, const int cFrames, const int fps);

private:
	double inertia;
	double mass;

};

