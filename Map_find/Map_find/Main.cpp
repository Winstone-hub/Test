#include "MainUpdate.h"


// ** FrameTime [o]
// ** Collision 


// ** �̱��� ����.
// ** ������Ÿ�� ����.



int main(void)
{
	ULONGLONG Time = GetTickCount64(); // 1000���� 1��

	MainUpdate Main;
	Main.Start();

	while (true)
	{
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();
			system("cls");

			Main.Update();
			Main.Render();
		}
	}

	return 0;
}






/*
// [Singleton]
class Singleton
{
private:
	static Singleton* Instance;
public:
	static Singleton* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new Singleton;
		return Instance;
	}

// [������ & �Ҹ���]
private:
	Singleton() {}
public:
	~Singleton() {}
};
*/