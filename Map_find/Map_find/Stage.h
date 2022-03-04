#pragma once
#include "Object.h"

class Object;
class Stage : public Object
{
private:
	Object* m_pPlayer;
public:
	virtual void Start()override;
	virtual void Update()override;
	virtual void Render()override;
	virtual void Release()override;
public:
	Stage();
	virtual ~Stage();
};

