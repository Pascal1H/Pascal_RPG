#include "Player.h"

Player::Player()
{
    //ctor
}

Player::~Player()
{
    //dtor
}

std::pair<int, int> Player::getPosition() {
    return this->position;
}

void Player::setPosition(std::pair<int, int> newPos) {
    this->position = newPos;
}

void Player::movePosition(int x, int y) {
    this->position.first += x;
    this->position.second += y;
}
