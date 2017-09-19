#ifndef COLLISIONDETECTION_H
#define COLLISIONDETECTION_H

#include <utility>
#include "../Map/Map.h"

class CollisionDetection
{
    public:
        CollisionDetection();
        virtual ~CollisionDetection();

        static int moveUp(Map& map, std::pair<int, int> currentPos, int distance);
        static int moveDown(Map& map, std::pair<int, int> currentPos, int distance);
        static int moveLeft(Map& map, std::pair<int, int> currentPos, int distance);
        static int moveRight(Map& map, std::pair<int, int> currentPos, int distance);

    protected:

    private:


};

#endif // COLLISIONDETECTION_H

