#include "Entity.h"

Entity::Entity()
{
    //ctor
}

Entity::~Entity()
{
    //dtor
}

void Entity::damageEntity(int damageAmount) {
    if(damageAmount > this->currentHealth)
        this->currentHealth = 0;
    else
        this->currentHealth -= damageAmount;
}

bool Entity::isEntityDead() {
    return this->currentHealth == 0;
}

int Entity::getMaxHealth() {
    return this->stamina * 4;
}

int Entity::getCurrentHealth() {
    return this->currentHealth;
}

float Entity::getCritChance() {
    return this->agility * 0.01;
}
