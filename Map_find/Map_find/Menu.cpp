#include "Menu.h"
#include "SceneManager.h"

Menu::Menu()
{

}

Menu::~Menu()
{
	Release();
}

void Menu::Start()
{
	Time = GetTickCount64();
}

void Menu::Update()
{
	if (GetAsyncKeyState('S'))
	{
		SceneManager::GetInstance()->SetScene(SCENEID_STAGE);
	}
}

void Menu::Render()
{

}

void Menu::Release()
{

}
