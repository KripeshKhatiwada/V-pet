#include<iostream>
#include "feeding.h"

void feed(Pet& pet) {
    if (pet.getHunger() > 0) {
        pet.setHunger(pet.getHunger() - 10);
        if (pet.getHunger() < 0) pet.setHunger(0);
        pet.changeHappiness(pet.getHappiness() + 5);
        std::cout << "You fed the pet!" << std::endl;
    } else {
        std::cout << "The pet is not hungry!" << std::endl;
    }
}