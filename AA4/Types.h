#pragma once
enum Movement { UP, DOWN, LEFT, RIGHT, NONE, COUNT };
enum class CellType { EMPTY = ' ', ROCK = 'o', COIN = '$', COUNT = 'n' };

struct Vector2
{
	int x;
	int y;
};