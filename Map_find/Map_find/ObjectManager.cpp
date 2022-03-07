#include "ObjectManager.h"
#include "Object.h"

ObjectManager* ObjectManager::Instance = nullptr;

ObjectManager::ObjectManager()
{

}

ObjectManager::~ObjectManager()
{

}

void ObjectManager::AddObject(Object* _Obj)
{
	map<string, list<Object*>>::iterator iter = 
		Objects.find(_Obj->Getkey());

	if (iter == Objects.end())
	{
		list<Object*> ObjectList;
		ObjectList.push_back(_Obj);
		Objects.insert(
			make_pair(_Obj->Getkey(), ObjectList));
	}
	else
		iter->second.push_back(_Obj);
}

list<Object*>* ObjectManager::FindList(string _strKey)
{
	map<string, list<Object*>>::iterator iter = Objects.find(_strKey);

	if (iter == Objects.end())
		return nullptr;
	else
		return &iter->second;
}

Object* ObjectManager::FindPlayer()
{
	map<string, list<Object*>>::iterator iter = Objects.find("Player");

	if (iter == Objects.end())
		return nullptr;
	else
		return iter->second.front();
}
