#ifndef SPRITEFACTORY_H
#define SPRITEFACTORY_H

#include <SFML/Graphics.hpp>
#include <map>

class SpriteFactory
{
    public:
        SpriteFactory();
        virtual ~SpriteFactory();

       void bindSpriteToTexture(sf::Sprite& sprite, int tile);

    protected:

    private:

        std::map<int, sf::Texture*> texes;
};

#endif // SPRITEFACTORY_H
