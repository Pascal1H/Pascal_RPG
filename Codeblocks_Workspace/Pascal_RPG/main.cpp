
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 400), "SFML works!");

	

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {

				if(event.type)        	
        	
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.display();
    }

    return 0;
}
