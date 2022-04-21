#include "sfml-ui/main.hpp"

#define SFML_STATIC

int main(int argCount, char* args[]) {
    init(argCount, args, [&](
        sf::RenderWindow& window,
        sf::Font& font,
        sf::Cursor& normalCursor,
        sf::Cursor& textBoxCursor,
        sf::Clock& clock,
        UI::Focus*& focus,
        UI::Hold*& hold,
        UI::Hover*& hover,
        UI::Scene*& currentScene
    ) -> std::function<void (sf::Time& time)> {});
    return 0;
}
