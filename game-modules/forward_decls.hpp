#pragma once
#include <vector>

namespace game {
    template<typename T> class matrix : public std::vector<std::vector<T>> {};
};
