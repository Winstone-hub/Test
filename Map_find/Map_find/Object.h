#pragma once
#include "Headers.h"

class Object
{
protected:
	string strKey;
	int iNumber;
public:
	virtual void Start()PURE;
	virtual void Update()PURE;
	virtual void Render()PURE;
	virtual void Release()PURE;
public:
	int GetNumber() { return iNumber; }
	void SetNumber(int _num) { iNumber = _num; }

	string Getkey() { return strKey; }
public:
	Object();
	virtual ~Object();
};

