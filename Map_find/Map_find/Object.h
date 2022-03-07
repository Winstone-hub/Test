#pragma once
#include "Headers.h"

class Object
{
protected:
	Transform Info;
	string strKey;
	int iNumber;
public:
	virtual void Start()PURE;
	virtual void Update()PURE;
	virtual void Render()PURE;
	virtual void Release()PURE;
public:
	string Getkey() { return strKey; }

	Vector3 GetPosition() const { return Info.Position; }
	void SetPosition(const Vector3& _Position) { Info.Position = _Position; }
	void SetPosition(const float& _x, const float& _y) { Info.Position.x = _x; Info.Position.y = _y; }

	Vector3 GetRotation() const { return Info.Rotation; }
	void SetRotation(const Vector3& _Rotation) { Info.Rotation = _Rotation; }
	void SetRotation(const float& _x, const float& _y) { Info.Rotation.x = _x; Info.Rotation.y = _y; }

	Vector3 GetScale() const { return Info.Scale; }
	void SetScale(const Vector3& _Scale) { Info.Scale = _Scale; }
	void SetScale(const float& _x, const float& _y) { Info.Scale.x = _x; Info.Scale.y = _y; }

	Transform GetTransform() const { return Info; }
	void SetTransform(const Transform& _Transform) { Info = _Transform; }
	void SetTransform(const Vector3& _Position, const Vector3& _Rotation, const Vector3& _Scale)  {  Info.Position = _Position; Info.Rotation = _Rotation; Info.Scale = _Scale; }
public:
	Object();
	virtual ~Object();
};

