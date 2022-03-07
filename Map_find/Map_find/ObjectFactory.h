#pragma once
#include "Object.h"

class ObjectFactory
{
public:
	template <typename T>
	static Object* CreateObject()
	{
		Object* pObj = new T;

		pObj->Start();

		return pObj;
	}


	template <typename T>
	static Object* CreateObject(float _x, float _y)
	{
		Object* pObj = new T;

		pObj->Start();
		pObj->SetPosition(_x, _y);

		return pObj;
	}

	template <typename T>
	static Object* CreateObject(Vector3 _Position)
	{
		Object* pObj = new T;

		pObj->Start();
		pObj->SetPosition(_Position);

		return pObj;
	}
};