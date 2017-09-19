#include "Map.h"

Map::Map()
{
    this->matrix = nullptr;
}

Map::~Map()
{
    //dtor
}

void Map::initMapWithSize(int sizeX, int sizeY) {
    this->matrix = new int*[sizeX];
    this->collisionMatrix = new int*[sizeX];
    this->spriteMatrix = new sf::Sprite**[sizeX];
    for(int i = 0; i < sizeX; i++) {
        this->matrix[i] = new int[sizeY];
        this->collisionMatrix[i] = new int[sizeY];
        this->spriteMatrix[i] = new sf::Sprite*[sizeY];
    }
}

bool Map::putNumberAt(int x, int y, int num) {
    if(this->matrix == nullptr)
        return false;

    this->matrix[x][y] = num;
    return true;
}

int Map::getNumberAt(int x, int y) {
    if(this->matrix == nullptr) return -1;

    return this->matrix[x][y];
}

bool Map::putCollisionAt(int x, int y, int num) {
    if(this->collisionMatrix == nullptr)
        return false;

    this->collisionMatrix[x][y] = num;
    return true;
}

int Map::getCollisionAt(int x, int y) {
    if(this->collisionMatrix == nullptr) return -1;

    return this->collisionMatrix[x][y];
}

bool Map::putSpriteAt(int x, int y, sf::Sprite* s) {
    if(this->spriteMatrix == nullptr)
        return false;

    this->spriteMatrix[x][y] = s;
    return true;
}

sf::Sprite* Map::getSpriteAt(int x, int y) {
    if(this->spriteMatrix == nullptr) return nullptr;

    return this->spriteMatrix[x][y];
}






