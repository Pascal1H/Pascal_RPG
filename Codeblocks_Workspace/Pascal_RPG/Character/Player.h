#ifndef PLAYER_H
#define PLAYER_H

#include <utility>

class Player
{
    public:
        Player();
        virtual ~Player();

    std::pair<int, int> getPosition();
    void setPosition(std::pair<int, int>);
    void movePosition(int x, int y);

    protected:

    private:

    std::pair<int, int> position;
};

#endif // PLAYER_H
