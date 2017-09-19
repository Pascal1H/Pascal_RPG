#include "SpriteFactory.h"
#include <iostream>
SpriteFactory::SpriteFactory()
{
    //this->numToTexstring.insert(std::pair<int, std::string>(12, ));
}

SpriteFactory::~SpriteFactory()
{
    //dtor
}

void SpriteFactory::bindSpriteToTexture(sf::Sprite& sprite, int tile) {
    sf::Texture *tex;

    std::string texPath = "Graphics/TileSet.png";


    if(this->texes.find(tile) != this->texes.end()) {
        tex = this->texes.at(tile);

    }
    else {
        tex = new sf::Texture();
        std::cout << "x: " << tile/12 << " | y: " << tile%12 << std::endl;
                tex->loadFromFile(texPath, sf::IntRect((tile % 12) * 32, (tile / 12) * 32, 32, 32));
        tex->setSmooth(true);

        this->texes.insert(std::pair<int, sf::Texture*>(tile, tex));

    }

    sprite.setTexture(*tex);
}
