#pragma once

#include <memory>
#include "Cartridge.h"
#include "PlayableCharacter.h"


static constexpr int maxCarts = 4;

class PlayerController
{
private:
	std::unique_ptr<PlayableCharacter> _player;
	std::vector<Cartridge> _carts[maxCarts];
public:
	PlayerController() {

	}
	//simply adds a cart to the pull
	//don't forget to solve the situation of overflowing the maxCarts
	void addCart(Cartridge cart) {
		//TODO place addition of another cart here
	}
	// reads the code exec Commands for the card and makes actions
	// that should be done
	void useCart(int idx) {
		//TODO place how to solve the execCommands of the chosen cart
	}
	//needed for GUI
	Cartridge& getCartByIdx(int idx) {
		//TODO solve the task
	}
	void placeCartToTable() {
		//TODO write the logic how to solve the task of this
	}
};

