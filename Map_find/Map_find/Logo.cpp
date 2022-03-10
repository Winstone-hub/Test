#include "Logo.h"
#include "SceneManager.h"
#include "CursorManager.h"

Logo::Logo()
{

}

Logo::~Logo()
{
	Release();
}

void Logo::Start()
{
	Time = GetTickCount64();
} 

void Logo::Update()
{
	if (GetAsyncKeyState('A'))
	{
		SceneManager::GetInstance()->SetScene(SCENEID_MENU);
	}
}

void Logo::Render()
{
	CursorManager::SetCursorPosition(1, 1);
	cout << "Logo";
}

void Logo::Release()
{

}
