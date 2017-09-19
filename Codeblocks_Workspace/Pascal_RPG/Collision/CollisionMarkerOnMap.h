#ifndef COLLISIONMARKERONMAP_H
#define COLLISIONMARKERONMAP_H

#include <vector>

#include "../Map/Map.h"

class CollisionMarkerOnMap
{
public:
        CollisionMarkerOnMap();
        virtual ~CollisionMarkerOnMap();

        void markCollisionTileOnMap(Map& map, int x, int y, int tile);

protected:

private:
    std::vector<int> collisionTileNumbers;
};

#endif // COLLISIONMARKERONMAP_H
