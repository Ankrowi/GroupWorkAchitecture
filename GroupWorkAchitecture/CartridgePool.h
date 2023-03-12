#pragma once

#include <vector>
#include <list>
#include "Cartridge.h"

class CartridgePool
{

private:
	std::vector<Cartridge> _freeCarts;
	std::list<Cartridge> _placedCarts;
public:
	CartridgePool() {

	}
	void setPool(std::vector<Cartridge>& cartPool) {
		_freeCarts = cartPool;
	}
	void addPlacedCart(Cartridge& placed) {
		_placedCarts.push_back(placed);
	}
	Cartridge& getFirtsPlaced() {
		Cartridge toReturn = _placedCarts.front();
		_placedCarts.pop_front();
		return toReturn;
	}
};

