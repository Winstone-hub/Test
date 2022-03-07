#pragma once
#include "Headers.h"

class CursorManager
{
public:
	static void SetCursorPosition(Vector3 _Position)
	{
		COORD Pos = { _Position.x, _Position.y };

		SetConsoleCursorPosition(
			GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	}

	static void SetCursorPosition(float _x, float _y)
	{
		COORD Pos = { _x, _y };

		SetConsoleCursorPosition(
			GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	}
};