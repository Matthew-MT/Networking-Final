#pragma once
#include "game-modules/forward_decls.hpp"
#include "sfml-ui/UI/concrete.hpp"

namespace game {
    class ScrollingMap {
    private:
        matrix<int> tileMap;
    public:
        ScrollingMap(sf::Vector2u dim);
    };
};
