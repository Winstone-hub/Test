#pragma once
#include "Object.h"

class Menu : public Object
{
public:
	virtual void Start()override;
	virtual void Update()override;
	virtual void Render()override;
	virtual void Release()override;
public:
	Menu();
	virtual ~Menu();
};

