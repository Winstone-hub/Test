#include "MainUpdate.h"

// ** [Singleton]  [O]
// ** 생성자 & 소멸자  [O]
// ** 오버로딩 & 오버라이딩  [O]
// ** 순수가상 함수  [O]
// ** 소멸자 버츄얼  [O]




// ** 맵.



int main(void)
{
	MainUpdate Main;
	Main.Start();

	while (true)
	{
		system("cls");


		Main.Update();
		Main.Render();
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