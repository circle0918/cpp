#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(const Animal &obj);
        virtual ~Animal();
        Animal& operator=(const Animal &obj);
        virtual void makeSound() const = 0;
        std::string getType() const;
};
#endif