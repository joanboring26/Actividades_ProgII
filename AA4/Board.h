#pragma once
#include <iostream>
#include "Player.h"
#include "Types.h"

class Board
{
	CellType** map;

	Player* player;

	float rockPrcntg;
	float coinPrcntg;

	Board(int sX, int sY)
	{
		//Map generation
		map = new CellType*[sX];
		for (int i = 0; i < sX; i++)
		{
			map[i] = new CellType[sY];
		}
		for (int i = 0; i < sX; i++)
		{
			for (int j = 0; j < sY; j++)
			{
				map[i][j] = CellType::EMPTY;
			}
		}

		int totTiles = sX * sY;

		//Rocks
		int rockNum = totTiles * rockPrcntg / 100;
		for (int r = 0; r < rockNum; r++)
		{
			int rX = rand() % sX;
			int rY = rand() % sY;
			if (map[rX][rY] != CellType::EMPTY)
			{
				r--;
			}
			else
			{
				map[rX][rY] = CellType::ROCK;
			}
		}

		//Coins
		int coinNum = totTiles * coinPrcntg / 100;
		for (int r = 0; r < coinNum; r++)
		{
			int rX = rand() % sX;
			int rY = rand() % sY;
			if (map[rX][rY] != CellType::EMPTY)
			{
				r--;
			}
			else
			{
				map[rX][rY] = CellType::COIN;
			}
		}

		player = new Player(0,0);


	}




};