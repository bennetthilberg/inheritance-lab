#include <iostream>
#include "Animal.h"

class Dog : public Animal {
    int spots;   
    public:
    Dog(int _age, int _spots) : Animal(_age), spots(_spots){
        
    }
    std::string GetType(){
        return "Dog";
    }
    int GetAge(){
        return Animal::GetAge() * 7;
    }
    std::string GetAttributes(){
        return "I have " + std::to_string(spots) + " spots!";
    }
    std::string GetSound(){
        return "Woof!";
    }
};