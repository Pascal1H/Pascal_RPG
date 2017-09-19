#include "MapLoader.h"
#include "../Collision/CollisionMarkerOnMap.h"

#include <fstream>
#include <iostream>
#include <sstream>

MapLoader::MapLoader()
{
    //ctor
}

MapLoader::~MapLoader()
{
    //dtor
}

bool MapLoader::loadMap(std::string fileName, int sizeX, int sizeY, SpriteFactory& _sf, Map& map) {

    CollisionMarkerOnMap cmom;

    map.initMapWithSize(sizeX, sizeY);

    std::ifstream mapReader("maps/" + fileName);

    std::string line;
    int x = 0, y = 0;
    while(std::getline(mapReader, line)) {
        std::stringstream ss;
        ss.str(line);
        std::string item;

        while (std::getline(ss, item, ',')) {

            int tile = std::stoi( item );

            if(!map.putNumberAt(x, y, tile)) {
                std::cout << "failed a put at x: " << x << " | y: " << y << "   with tile number: " << tile << std::endl;
            }
            else {
                cmom.markCollisionTileOnMap(map, x, y, tile);
                sf::Sprite *sp = new sf::Sprite();
                _sf.bindSpriteToTexture(*sp, tile);
                sp->setPosition(sf::Vector2f(32*x,32*y));
                map.putSpriteAt(x, y, sp);
            }
            x++;
        }
        x = 0;
        y++;
    }
    return true;
}
