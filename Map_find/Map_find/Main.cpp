#include "MainUpdate.h"


// ** FrameTime [o]
// ** Collision 


// ** 싱글톤 삭제.
// ** 프로토타입 패턴.



int main(void)
{
	ULONGLONG Time = GetTickCount64(); // 1000분의 1초

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

// [생성자 & 소멸자]
private:
	Singleton() {}
public:
	~Singleton() {}
};
*/