#pragma once

#include "MapCell.h"

static constexpr int RowCnt = 3;
static constexpr int ColumnCnt = 6;

enum EMoveDirections {
	Up,
	Down,
	Left,
	Right
};

class BattleMap
{ 
private:
	MapCell _cells[RowCnt][ColumnCnt];
	Vector3 _playerPosition;
	Vector3 _enemyPosition;

public:

	BattleMap() {
		//TODO write the way to give mapCells their coords
	};
	BattleMap(Vector3 playerInitPos, Vector3 enemyInitPos) {
		//TODO write the way to give mapCells their coords
	}
	//Returns the new position of the movable actor
	//if isPlayer, the move change playerPosition, else move the enemyPosition
	Vector3 moveActor(Vector3 startPosition, EMoveDirections direction, int movement) {
		//TODO place logic here!
		//and don't forget to check whether the coords belong to enemy or player
	}
};

