#include "MainUpdate.h"

// ** [Singleton]  [O]
// ** ������ & �Ҹ���  [O]
// ** �����ε� & �������̵�  [O]
// ** �������� �Լ�  [O]
// ** �Ҹ��� �����  [O]




// ** ��.



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

// [������ & �Ҹ���]
private:
	Singleton() {}
public:
	~Singleton() {}
};
*/