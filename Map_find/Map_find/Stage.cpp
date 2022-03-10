#include "Stage.h"
#include "SceneManager.h"
#include "ObjectFactory.h"
#include "ObjectManager.h"
#include "CursorManager.h"
#include "CollisionManager.h"
#include "Player.h"
#include "Enemy.h"

Stage::Stage() : m_pPlayer(nullptr), m_pEnemys(nullptr), iNumber(0)
{

}

Stage::~Stage()
{
	Release();
}

void Stage::Start()
{
	Time = GetTickCount64();

	m_pPlayer = ObjectManager::GetInstance()->FindPlayer();

	if (!m_pPlayer)
	{
		m_pPlayer = ObjectFactory::CreateObject<Player>();
		ObjectManager::GetInstance()->AddObject(m_pPlayer);
	}



	m_pEnemys = ObjectManager::GetInstance()->FindList("Enemy");

	if (m_pEnemys == nullptr)
	{
		for (int i = 0; i < 10; ++i)
		{
			srand(int(GetTickCount64() * (i + 1))); // ** 랜덤 함수 초기화

			Object* pEnemy = ObjectFactory::CreateObject<Enemy>(
				float(rand()%99), float(rand() % 27));
			ObjectManager::GetInstance()->AddObject(pEnemy);
		}

		m_pEnemys = ObjectManager::GetInstance()->FindList("Enemy");
	}
}

void Stage::Update()
{
	if (Time + 984 < GetTickCount64())
	{
		Time = GetTickCount64();
		iNumber++;
	}



	for (list<Object*>::iterator iter = m_pEnemys->begin();
		iter != m_pEnemys->end(); ++iter)
		if (CollisionManager::Collision(m_pPlayer, (*iter)))
		{
			CursorManager::SetCursorPosition(44, 2);
			cout << "충돌 입니다.";
		}




	for (list<Object*>::iterator iter = m_pEnemys->begin();
		iter != m_pEnemys->end(); ++iter)
		(*iter)->Update();

	m_pPlayer->Update();

	if (GetAsyncKeyState('D'))
		SceneManager::GetInstance()->SetScene(SCENEID_LOGO);
}

void Stage::Render()
{
	for (list<Object*>::iterator iter = m_pEnemys->begin();
		iter != m_pEnemys->end(); ++iter)
		(*iter)->Render();

	m_pPlayer->Render();

	CursorManager::SetCursorPosition(49, 1);
	cout << iNumber;
}

void Stage::Release()
{

}
