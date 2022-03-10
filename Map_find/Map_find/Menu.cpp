#include "Menu.h"
#include "SceneManager.h"
#include "CursorManager.h"

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
	CursorManager::SetCursorPosition(1, 1);
	cout << "Menu";
}

void Menu::Release()
{

}
