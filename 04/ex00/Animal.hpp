#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <cstdio>

class Animal{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(const Animal &obj);
        ~Animal();
        Animal& operator=(const Animal &obj);
        virtual void const makeSound();
        std::string GetType();
};
#endif