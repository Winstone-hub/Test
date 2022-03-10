#pragma once
#include "Scene.h"

class Object;
class Stage : public Scene
{
private:
	int iNumber;
	Object* m_pPlayer;
	list<Object*>* m_pEnemys;
public:
	virtual void Start()override;
	virtual void Update()override;
	virtual void Render()override;
	virtual void Release()override;
public:
	Stage();
	virtual ~Stage();
};

