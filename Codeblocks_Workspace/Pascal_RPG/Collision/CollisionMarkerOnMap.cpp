#include "CollisionMarkerOnMap.h"

#include <algorithm>

CollisionMarkerOnMap::CollisionMarkerOnMap()
{
    this->collisionTileNumbers.push_back(60);
    this->collisionTileNumbers.push_back(61);
    this->collisionTileNumbers.push_back(63);
}

CollisionMarkerOnMap::~CollisionMarkerOnMap()
{
    //dtor
}

void CollisionMarkerOnMap::markCollisionTileOnMap(Map& map, int x, int y, int tile) {
    if(std::find(this->collisionTileNumbers.begin(), this->collisionTileNumbers.end(), tile) != this->collisionTileNumbers.end()) {
        map.putCollisionAt(x, y, 1);
    } else {
        map.putCollisionAt(x, y, 0);
    }
}
