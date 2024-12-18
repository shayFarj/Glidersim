#pragma once
#include "physStructs.h"
#include "vector"
// using SI units
class RigidBody abstract
{
public:
	RigidBody();
	~RigidBody();
	std::vector<Frame> createFrames(const int cFrames, const int fps);

private:
	double inertia;
	double mass;

};

