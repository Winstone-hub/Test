#include "Logo.h"
#include "SceneManager.h"

Logo::Logo()
{

}

Logo::~Logo()
{

}

void Logo::Start()
{
	Time = GetTickCount64();
}

void Logo::Update()
{
	if (Time + 5000 < GetTickCount64())
	{
		SceneManager::GetInstance()->SetScene(SCENEID_MENU);
	}
}

void Logo::Render()
{
	cout << "Logo" << endl;
}

void Logo::Release()
{

}
