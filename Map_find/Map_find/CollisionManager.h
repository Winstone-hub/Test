#pragma once
#include "Object.h"

class CollisionManager
{
public:
	static bool Collision(Object* _Origin, Object* _Target)
	{
		Transform PlayerTranspos = _Origin->GetTransform();
		Transform EnemyTranspos = _Target->GetTransform();

		if ((PlayerTranspos.Position.x + PlayerTranspos.Scale.x) > EnemyTranspos.Position.x &&
			(EnemyTranspos.Position.x + EnemyTranspos.Scale.x) > PlayerTranspos.Position.x &&
			EnemyTranspos.Position.y == PlayerTranspos.Position.y)
			return true;
		return false;
	}
};

