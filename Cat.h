#include <iostream>
#include "Animal.h"

class Cat : public Animal {
    int whiskers;
    public:
    Cat(int _age, int _whiskers) : Animal(_age), whiskers(_whiskers){

    }
    std::string GetType(){
        return "Cat";
    }
    int GetAge(){
        return Animal::GetAge();
    }
    std::string GetSound(){
        return "Meow!";
    }
    std::string GetAttributes(){
        return "I have " + std::to_string(whiskers) + " whiskers!";
    }
};