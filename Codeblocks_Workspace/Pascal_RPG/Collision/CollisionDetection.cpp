#include "CollisionDetection.h"

#include <iostream>

CollisionDetection::CollisionDetection()
{
    //ctor
}

CollisionDetection::~CollisionDetection()
{
    //dtor
}


int CollisionDetection::moveUp(Map& map, std::pair<int, int> currentPos, int distance) {

    int nPosX = currentPos.first;
    int nPosY = currentPos.second + distance;


    if(map.getCollisionAt(nPosX / 32, nPosY / 32) == 0 && map.getCollisionAt((nPosX + 31) / 32, nPosY / 32) == 0) {
        return 999;
    }

    return currentPos.second % 32;

}

int CollisionDetection::moveDown(Map& map, std::pair<int, int> currentPos, int distance) {

    int nPosX = currentPos.first;
    int nPosY = currentPos.second + distance;

    if(map.getCollisionAt(nPosX / 32, (nPosY + 31) / 32) == 0 && map.getCollisionAt((nPosX + 31) / 32, (nPosY + 31) / 32) == 0) {
        return 999;
    }

    return (32 - currentPos.second % 32) % 32;
}

int CollisionDetection::moveLeft(Map& map, std::pair<int, int> currentPos, int distance) {

    int nPosX = currentPos.first + distance;
    int nPosY = currentPos.second;


    if(map.getCollisionAt(nPosX / 32, nPosY / 32) == 0 && map.getCollisionAt(nPosX / 32, (nPosY + 31) / 32) == 0) {
        return 999;
    }

    return currentPos.first % 32;

}

int CollisionDetection::moveRight(Map& map, std::pair<int, int> currentPos, int distance) {

    int nPosX = currentPos.first + distance;
    int nPosY = currentPos.second;

    if(map.getCollisionAt((nPosX + 31) / 32, nPosY / 32) == 0 && map.getCollisionAt((nPosX + 31) / 32, (nPosY + 31) / 32) == 0) {
        return 999;
    }

    return (32 - currentPos.first % 32) % 32;
}

