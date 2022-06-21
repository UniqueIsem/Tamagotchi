#include "Feeling.h"


void Feeling::interactuar(){
	list <string> options;
	int i = 1;
	options.push_front("A- ALIMENTAR");
	options.push_front("S- PEGAR");
	options.push_front("D- DUCHAR");
	options.push_front("F- EJERCITAR");
		for (auto obj : options) {
			cout << obj << endl;
			i++;
		}
		cout << "Ingrese la opcion que desea realizar: ";
}

void Feeling::tamagotchi() {
    sf::RenderWindow window(sf::VideoMode(250, 250), "Tamagotchi");
    sf::RectangleShape thing(sf::Vector2f(250, 250));
    sf::Texture thingTexture;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed){ window.close(); }
      
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
                thingTexture.loadFromFile("happy.png");
                thing.setTexture(&thingTexture);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                thingTexture.loadFromFile("sad.png");
                thing.setTexture(&thingTexture);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
                thingTexture.loadFromFile("angry.png");
                thing.setTexture(&thingTexture);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::F)) {
                thingTexture.loadFromFile("dead.png");
                thing.setTexture(&thingTexture);
            }
        }
        window.clear();
        window.draw(thing);
        window.display();
    }
}