#include <iostream>
#include <list>
#include <vector>
#include <map>

using namespace std;

/*
struct Vector3
{
	float x, y, z;
};

struct Transform
{
	Vector3 Position;
	Vector3 Rotation;
	Vector3 Scale;
};
*/

class Object
{
protected:
	string strKey;
	int iNumber;
public:
	virtual void Initialize() = 0;
public:
	int GetNumber() { return iNumber; }
	void SetNumber(int _num) { iNumber = _num; }

	string Getkey() { return strKey; }
};

class Enemy : public Object
{
public:
	virtual void Initialize()override;
};

void Enemy::Initialize()
{
	strKey = "Enemy";
}


class Bullet : public Object
{
public:
	virtual void Initialize()override;
};

void Bullet::Initialize()
{
	strKey = "Bullet";
}

map<string, list<Object*>> Objects;





template <typename T>
Object* CreateObject();

template <typename T>
Object* CreateObject(int _num);


void AddObject(Object* _Obj);





int main(void)
{
	// ** 생성 후 추가 Enemy
	for (int i = 0; i < 10; ++i)
	{
		Object* pObj = CreateObject<Enemy>(i);
		AddObject(pObj);
	}

	// ** 생성 후 추가 Bullet
	for (int i = 0; i < 10; ++i)
	{
		Object* pObj = CreateObject<Bullet>(i);
		AddObject(pObj);
	}



	// ** 출력
	for (map<string, list<Object*>>::iterator iter = Objects.begin();
		iter != Objects.end(); ++iter)
	{
		cout << " [" << iter->first << "] " << endl;

		for (list<Object*>::iterator iter2 = iter->second.begin();
			iter2 != iter->second.end(); ++iter2)
		{
			cout << (*iter2)->Getkey() << " : " << (*iter2)->GetNumber() << endl;
		}
		cout << endl;
	}


	return 0;
}


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