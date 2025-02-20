#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        /*
        * Set a background color by passing a color to the window.clear method
        * Red, Blue, Yellow and Green are built-in colors
        * We can also use RGB colors
        */
        //window.clear(sf::Color::Black);
        window.clear(sf::Color(100, 150, 250));
        window.display();
    }

    return 0;
}