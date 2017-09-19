
#include <SFML/Graphics.hpp>

#include "Map/MapLoader.h"
#include "Collision/CollisionDetection.h"
#include "Units/Unit.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");

    Map m;
    SpriteFactory _sf;
    
    sf::Texture tex;
        
    tex.loadFromFile("Graphics/TileSet.png", sf::IntRect(1*32, 4*32, 32, 32));
    tex.setSmooth(true);

    sf::Sprite sp(tex);
    
    sp.setPosition(600, 600);
    
    MapLoader::loadMap("first.csv", 100, 100, _sf, m);
    
    sf::View gameView;
    gameView.setViewport(sf::FloatRect(0, 0, 1, 1));
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {

            if(event.key.code == sf::Keyboard::W) {
                int distanceToGo = CollisionDetection::moveUp(m, std::pair<int, int>(sp.getPosition().x, sp.getPosition().y), -Unit::movementSpeed);
                gameView.move(0, -distanceToGo);
                sp.move(0, -distanceToGo);
            }
            
            if(event.key.code == sf::Keyboard::S) {
                int distanceToGo = CollisionDetection::moveDown(m, std::pair<int, int>(sp.getPosition().x, sp.getPosition().y), Unit::movementSpeed);
                gameView.move(0, distanceToGo);
                sp.move(0, distanceToGo);
            }
            
            if(event.key.code == sf::Keyboard::A) {
                int distanceToGo = CollisionDetection::moveLeft(m, std::pair<int, int>(sp.getPosition().x, sp.getPosition().y), -Unit::movementSpeed);
                gameView.move(-distanceToGo, 0);
                sp.move(-distanceToGo, 0);
            }
            
            if(event.key.code == sf::Keyboard::D) {
                int distanceToGo = CollisionDetection::moveRight(m, std::pair<int, int>(sp.getPosition().x, sp.getPosition().y), Unit::movementSpeed);
                gameView.move(distanceToGo, 0);
                sp.move(distanceToGo, 0);
            }
        	
            if (event.type == sf::Event::Closed)
                window.close();
            
            window.setView(gameView);
        }

        window.clear();
        
        for(int x = 0; x < 100; x++) {
            for(int y = 0; y < 100; y++) {
                window.draw(*m.getSpriteAt(x,y));
            }
        }
        
        window.draw(sp);

        window.display();
    }

    return 0;
}
