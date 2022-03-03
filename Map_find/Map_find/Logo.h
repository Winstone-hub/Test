#pragma once
#include "Object.h"

class Logo : public Object
{
public:
	virtual void Start()override;
	virtual void Update()override;
	virtual void Render()override;
	virtual void Release()override;
public:
	Logo();
	virtual ~Logo();
};

