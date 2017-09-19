#ifndef MAP_H
#define MAP_H

#include <SFML/Graphics.hpp>

class Map
{
public:
        Map();
        virtual ~Map();

        void initMapWithSize(int sizeX, int sizeY);
        bool putNumberAt(int x, int y, int num);
        int getNumberAt(int x, int y);

        bool putCollisionAt(int x, int y, int num);
        int getCollisionAt(int x, int y);

        bool putSpriteAt(int x, int y, sf::Sprite* s);
        sf::Sprite* getSpriteAt(int x, int y);

protected:

private:

    int **matrix;
    int **collisionMatrix;
    sf::Sprite ***spriteMatrix;
};

#endif // MAP_H
