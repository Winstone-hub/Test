#include "MainUpdate.h"

// ** 생성자 & 소멸자  [O]
// ** 오버로딩 & 오버라이딩  [O]
// 
// ** 순수가상 함수. 
// ** 소멸자 버츄얼.
// ** 맵.

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


// ** 오버로딩 & 오버라이딩

class AAA
{
public:
	virtual void Output()
	{
		cout << "AAA : Output" << endl;
	}
public:
	AAA()
	{
		cout << "AAA : 생성자" << endl;
	}
	~AAA()
	{
		cout << "AAA : 소멸자" << endl;
	}
};

class BBB : public AAA
{
public:
	virtual void Output()
	{
		cout << "BBB : Output" << endl;
	}
public:
	BBB() 
	{
		cout << "BBB : 생성자" << endl;
	}
	~BBB() 
	{
		cout << "BBB : 소멸자" << endl;
	}
};



int main(void)
{
	AAA* a = new BBB;
	a->Output();


	return 0;
}




/*
map<string, list<Object*>> Objects;

void AddObject(Object* _Obj);



template <typename T>
Object* CreateObject();

template <typename T>
Object* CreateObject(int _num);







template <typename T>
Object* CreateObject()
{
	Object* pObj = new T;

	pObj->Initialize();

	return pObj;
}

template <typename T>
Object* CreateObject(int _num)
{
	Object* pObj = new T;

	pObj->Initialize();
	pObj->SetNumber(_num);

	return pObj;
}

void AddObject(Object* _Obj)
{
	map<string, list<Object*>>::iterator iter = Objects.find(_Obj->Getkey());

	if (iter == Objects.end())
	{
		list<Object*> ObjectList;
		ObjectList.push_back(_Obj);
		Objects.insert(make_pair(_Obj->Getkey(), ObjectList));
	}
	else
		iter->second.push_back(_Obj);
}
*/