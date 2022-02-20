#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP
#include <string>
#include <iostream>

class WrongAnimal{
    protected:
        std::string _type;

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &obj);
        virtual ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal &obj);
        void makeSound() const;
        std::string getType() const;
};
#endif