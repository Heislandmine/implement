#pragma once
#include<string>
class Book {
    private:
        std::string name;
    public:
        Book();
        Book(std::string name);
        std::string getName();
};