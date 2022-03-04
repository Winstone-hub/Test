#include "MainUpdate.h"

// ** 생성자 & 소멸자  [O]
// ** 오버로딩 & 오버라이딩  [O]
// ** 순수가상 함수  [O]
// 
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

int main(void)
{





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