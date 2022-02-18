#pragma once

class PlayerController;
class Scene
{
private:
	PlayerController* Player;
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

