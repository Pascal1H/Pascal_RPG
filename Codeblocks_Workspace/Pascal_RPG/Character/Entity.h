#ifndef ENTITY_H
#define ENTITY_H


class Entity
{
public:
        Entity();
        virtual ~Entity();

    void damageEntity(int damageAmount);
    bool isEntityDead();
    int getMaxHealth();
    int getCurrentHealth();

    float getCritChance();

protected:

private:

    int strenght;
    int agility;
    int stamina;

    int currentHealth;

};

#endif // ENTITY_H
