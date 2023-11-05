#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "emp/base/Ptr.hpp"
#include "emp/base/vector.hpp"
#include <ostream>

int main() {
    emp::vector<emp::Ptr<Animal>> population;
    population.push_back(new Dog(5, 2));
    std::cout << population[0]->GetType() << std::endl;
    std::cout << population[0]->GetAge() << std::endl;
    std::cout << population[0]->GetAttributes() << std::endl;
    std::cout << population[0]->GetSound() << std::endl;
    population.push_back(new Cat(3, 4));
    std::cout << population[1]->GetType() << std::endl;
    std::cout << population[1]->GetAge() << std::endl;
    std::cout << population[1]->GetAttributes() << std::endl;
    std::cout << population[1]->GetSound() << std::endl;
}
