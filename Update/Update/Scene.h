#pragma once

class Object;
class Scene
{
private:
	Object* Player;
public:
	void Start();
	void Update();
	void LateUpdate();
	void Render();
	void Destroy();
public:
	Scene();
	~Scene();
};

