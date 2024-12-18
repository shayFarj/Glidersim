#pragma once
struct Vector2 {
public:
	int x;
	int y;
};

struct Frame {
public:
	double time;

	Vector2 pos;
	Vector2 vel;
	Vector2 acc;

	double pitch;
	double pitch_vel;
	double pitch_acc;

	Vector2 force;
	double moment;
};