#include "Stage.h"
#include "Player.h"

Stage::Stage()
{

}

Stage::~Stage()
{

}

void Stage::Start()
{
	m_pPlayer = new Player;
	m_pPlayer->Start();
}

void Stage::Update()
{
	m_pPlayer->Update();
}

void Stage::Render()
{
	m_pPlayer->Render();
}

void Stage::Release()
{
	m_pPlayer->Release();
}
