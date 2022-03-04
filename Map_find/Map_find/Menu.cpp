#include "Menu.h"
#include "SceneManager.h"

Menu::Menu()
{

}

Menu::~Menu()
{

}

void Menu::Start()
{
	Time = GetTickCount64();
}

void Menu::Update()
{
	if (Time + 5000 < GetTickCount64())
	{
		SceneManager::GetInstance()->SetScene(SCENEID_STAGE);
	}
}

void Menu::Render()
{
	cout << "Menu" << endl;
}

void Menu::Release()
{

}
