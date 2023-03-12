#pragma once
#include <memory>
#include "BattleMap.h"

class PlayableCharacter
{
private:
	std::shared_ptr<BattleMap> _map;
	float _health;
	Vector3 _position;

public:
	PlayableCharacter() {
	}
	//Shares the pointer to the actual battleMap from gameMode?(may be transfered to BeginPlay)
	void setMap(std::shared_ptr<BattleMap> battleMap) {
		_map = battleMap;
	}
	void getHit(float incomeDamage) {
		_health -= incomeDamage;
		//TODO check if dead
	}
	void move(EMoveDirections direction, int movement) {
		_position = _map->moveActor(_position, direction, movement);
	}
	Vector3 getPosition() {
		return _position;
	}
};

