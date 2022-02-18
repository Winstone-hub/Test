#include "Scene.h"
#include "PlayerController.h"

Scene::Scene()
{

}

Scene::~Scene()
{

}

void Scene::Start()
{
	Player = new PlayerController;
	Player->Start();
}

void Scene::Update()
{
	Player->Update();
}

void Scene::LateUpdate()
{
	Player->LateUpdate();
}

void Scene::Render()
{
	Player->Render();
}

void Scene::Destroy()
{
	Player->Destroy();
}