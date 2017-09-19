#ifndef MAPLOADER_H
#define MAPLOADER_H

#include <string>

#include "Map.h"
#include "../Graphics/SpriteFactory.h"

class MapLoader
{
public:
        MapLoader();
        virtual ~MapLoader();

        bool loadMap(std::string fileName, int sizeX, int sizeY, SpriteFactory& _sf, Map& map);

protected:

private:
};

#endif // MAPLOADER_H
