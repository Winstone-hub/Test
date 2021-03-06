#include "SceneManager.h"

#include "Logo.h"
#include "Menu.h"
#include "Stage.h"

SceneManager* SceneManager::Instance = nullptr;

SceneManager::SceneManager() : SceneState(nullptr)
{

}

SceneManager::~SceneManager()
{
	Release();
}

void SceneManager::SetScene(SCENEID _SceneID)
{
	if (SceneState != nullptr)
	{
		delete SceneState;
		SceneState = nullptr;
	}

	switch (_SceneID)
	{
	case SCENEID_LOGO:
		SceneState = new Logo;
		break;

	case SCENEID_MENU:
		SceneState = new Menu;
		break;

	case SCENEID_STAGE:
		SceneState = new Stage;
		break;

	case SCENEID_EXIT:
		exit(NULL);
		break;
	}

	SceneState->Start();
}

void SceneManager::Update()
{
	SceneState->Update();
}

void SceneManager::Render()
{
	SceneState->Render();
}

void SceneManager::Release()
{
	SceneState->Release();
}

