#pragma once
#include "Headers.h"

class Object
{
public:
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void LateUpdate() = 0;
	virtual void Render() = 0;
	virtual void Destroy() = 0;
public:
	Object();
	virtual ~Object();
};

