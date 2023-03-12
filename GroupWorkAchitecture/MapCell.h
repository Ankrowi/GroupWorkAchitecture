#pragma once

#include <vector>


typedef std::vector<float> Vector3;
class MapCell
{
private:
	Vector3 _coords;

public:
	MapCell() {
	
	}

	MapCell(Vector3 initCoords) {
		_coords = initCoords;
	}

	Vector3 getCoords() {
		return _coords;
	}
};

