#include<iostream>
#include "pet.h"
#include "feeding.h"

void Pet::changeName(std::string& newName) {
    name = newName;
    std::cout << "New name: " << name << std::endl;
}

void Pet::changeHealth(int& newHealth) {
    health = newHealth;
    if (health < 0) health = 0;
    if (health > 100) health = 100;
    std::cout << "Health: " << health << std::endl;
}

void Pet::changeEnergy(int& newEnergy) {
    energy = newEnergy;
    if (energy < 0) energy = 0;
    if (energy > 100) energy = 100;
    std::cout << "Energy: " << energy << std::endl;
}

void Pet::changeHappiness(int& newHappiness) {
    happiness = newHappiness;
    if (happiness < 0) happiness = 0;
    if (happiness > 100) happiness = 100;
    std::cout << "Happiness: " << happiness << std::endl;
}

void Pet::changeHunger(int& newHunger) {
    hunger = newHunger;
    if (hunger < 0) hunger = 0;
    if (hunger > 100) hunger = 100;
    std::cout << "Hunger: " << hunger << std::endl;
}

void Pet::setHunger(int newHunger) {
    hunger = newHunger;
    if (hunger < 0) hunger = 0;
    if (hunger > 100) hunger = 100;
}

void Pet::displayStatus() {
    std::cout << "Pet Status:" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "Hunger: " << hunger << std::endl;
    std::cout << "Happiness: " << happiness << std::endl;
    std::cout << "Energy: " << energy << std::endl;
}

int main() {
    Pet myPet;
    std::string newName = "Fluffy";
    myPet.changeName(newName);
    int newHealth = 80;
    myPet.changeHealth(newHealth);
    int newEnergy = 50;
    myPet.changeEnergy(newEnergy);
    int newHappiness = 90;
    myPet.changeHappiness(newHappiness);
    int newHunger = 20;
    myPet.changeHunger(newHunger);
    myPet.displayStatus();
    feed(myPet); // Test the feed function
    myPet.displayStatus();
    return 0;
}