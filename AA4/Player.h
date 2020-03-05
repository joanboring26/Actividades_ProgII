#pragma once
#include "Types.h"
class Player
{
public:
	Movement currMov;
	Vector2 pos;

	Player(int pX, int pY)
	{
		pos.x = pX;
		pos.y = pY;
	}

	Vector2 FutureMovement(Movement movDir)
	{
		switch (movDir)
		{
		case Movement::UP:
			//return Vector2(pos.x);
			break;
		case Movement::DOWN:
			break;
		case Movement::LEFT:
			break;
		case Movement::RIGHT:
			break;
		default:
			break;
		}
	}

	bool CheckMovement(Vector2 futurePos)
	{

	}

	void UpdatePlayer(CellType** map, Movement movDir)
	{
		currMov = movDir;


	}

};