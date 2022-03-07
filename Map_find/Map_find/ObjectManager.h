#pragma once
#include "Headers.h"

class Object;
class ObjectManager
{
private:
	static ObjectManager* Instance;
public:
	static ObjectManager* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new ObjectManager;
		return Instance;
	}
private:
	map<string, list<Object*>> Objects;
public:
	void AddObject(Object* _Obj);
	list<Object*>* FindList(string _strKey);
	Object* FindPlayer();
private:
	ObjectManager();
public:
	~ObjectManager();
};