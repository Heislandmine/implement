#pragma once
#include"iterator.hpp"

template <typename T>
class Aggregate {
    public:
        virtual Iterator<T>* iterator() = 0;
};