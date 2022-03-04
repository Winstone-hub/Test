#include "MainUpdate.h"
#include "SceneManager.h"

MainUpdate::MainUpdate()
{

}

MainUpdate::~MainUpdate()
{
	Release();
}


void MainUpdate::Start()
{
	SceneManager::GetInstance()->SetScene(SCENEID_LOGO);
}

void MainUpdate::Update()
{
	SceneManager::GetInstance()->Update();
}

void MainUpdate::Render()
{
	SceneManager::GetInstance()->Render();
}

void MainUpdate::Release()
{
	// ** ΩÃ±€≈Ê ªË¡¶.
}
