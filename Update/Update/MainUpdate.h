#pragma once
#include "Headers.h"

class Scene;
class MainUpdate
{
private:
	Scene* m_pScene;
public:
	void Start();
	void Update();
	void LateUpdate();
	void FixedUpdate();
	void Render();
	void Destroy();
public:
	MainUpdate();
	~MainUpdate();
};

