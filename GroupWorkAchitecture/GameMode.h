#pragma once

#include "ConfigParser.h"
#include "BattleMap.h"
#include "PlayerController.h"
#include "CartridgePool.h"

#include <memory>
#include <list>

static constexpr int maxCartsOnTable = 3;

class GameMode
{
private:
	std::pair<std::unique_ptr<PlayerController>, 
		std::unique_ptr<CartridgePool> > _player;
	std::pair<std::unique_ptr<PlayerController>, 
		std::unique_ptr<CartridgePool> > _enemy; 
	std::vector<Cartridge> _cartProtos;

public:
	GameMode() {
		//TODO init battlemap, carts vectors
	}
	//place for all initialization of resources for the inner components
	void BeginPlay() {
		ConfigParser parser;
		_cartProtos = parser.parseCartridges();
		//TODO place another logic of how to give etc.
	}
	//Starts the process of coming to next turn
	//first new carts are given to the controllers
	void nextTurn() {

	}
	void ExecPlacedCarts() {
		for (int i = 0; i < maxCartsOnTable; ++i) {
			//TODO make threads for solving the simultanios 
			//execution of comands for carts on table
		}
	}
};

