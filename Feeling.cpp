#include "Feeling.h"

void Feeling::options() {
    list <string> options;
    options.push_back("presione A para ALIMENTAR");
    options.push_back("presione S para PEGAR");
    options.push_back("presione D para DUCHAR");
    options.push_back("presione F para EJERCITAR");
    for (auto obj : options) {
        cout << obj << endl;
    }
}

void Feeling::tamagotchi() {
    sf::RenderWindow window(sf::VideoMode(250, 250), "Tamagotchi");
    sf::RectangleShape thing(sf::Vector2f(250, 250));
    sf::Texture thingTexture;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) { window.close(); }

            estadoA = happy;

            //SI ESTA FELIZ
            if (estadoA == happy) {
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                    thingTexture.loadFromFile("sad.png");
                    thing.setTexture(&thingTexture);
                    cout << "Le pegaste, tu tamagotchi se encuentra triste" << endl;
                    estadoA = sad;
                }
                //continue;
            }
            //SI ESTA TRISTE
            if (estadoA == sad) {
                if ((sf::Keyboard::isKeyPressed(sf::Keyboard::A)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::F))) {
                    thingTexture.loadFromFile("happy.png");
                    thing.setTexture(&thingTexture);
                    cout << "Lo alimentaste, tu tamagotchi se encuentra feliz" << endl;
                    estadoA = happy;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                    thingTexture.loadFromFile("angry.png");
                    thing.setTexture(&thingTexture);
                    cout << "Le pegaste, tu tamagotchi se encuentra enojado" << endl;
                    estadoA = angry;
                }
                //continue;
            }
            //SI ESTA ENOJADO
            if (estadoA = angry) {
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
                    thingTexture.loadFromFile("happy.png");
                    thing.setTexture(&thingTexture);
                    cout << "Lo alimentaste, tu tamagotchi se encuentra feliz" << endl;
                    estadoA = happy;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                    thingTexture.loadFromFile("dead.png");
                    thing.setTexture(&thingTexture);
                    cout << "Le pegaste, tu tamagotchi murio" << endl;
                    estadoA = dead;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
                    thingTexture.loadFromFile("sad.png");
                    thing.setTexture(&thingTexture);
                    cout << "Lo bañaste, tu tamagotchi se encuentra triste" << endl;
                    estadoA = sad;
                }
                //continue;
            }
            //SI ESTA MUERTO
                if (estadoA = estadoF) {
                    exit;
                }
                //continue;

        }
        window.clear();
        window.draw(thing);
        window.display();
    }
}