#pragma once
#include "game-modules/forward_decls.hpp"
#include "sfml-ui/UI/concrete.hpp"

#define SFML_STATIC

namespace game {
    class Tile : public sf::RectangleShape {
    private:
        bool solid;
        sf::RectangleShape tile;

        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const {
            target.draw(tile, states);
        }
    public:
        Tile(const sf::Vector2f& pos, const sf::Vector2f& size, bool isSolid = true);
    };

    class ScrollingMap {
    private:
        matrix<int> tileMap;
    public:
        ScrollingMap(sf::Vector2u dim);

        matrix<Tile> loadScreen();
    };
};
