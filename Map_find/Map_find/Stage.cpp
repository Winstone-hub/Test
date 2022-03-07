#include "Stage.h"
#include "SceneManager.h"
#include "ObjectFactory.h"
#include "ObjectManager.h"
#include "Player.h"
#include "Enemy.h"

Stage::Stage() : m_pPlayer(nullptr), m_pEnemys(nullptr)
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
}

void Stage::Release()
{

}
