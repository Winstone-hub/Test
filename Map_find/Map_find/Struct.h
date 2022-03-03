#pragma once
struct Vector3
{
	float x, y, z;
};

struct Transform
{
	Vector3 Position;
	Vector3 Rotation;
	Vector3 Scale;
};