#ifndef PET_H
#define PET_H

#include<string>

class Pet {
    std::string name = "Tommy";
    int hunger = 0;      // 0 = starving
    int happiness = 100;
    int health = 100;
    int energy = 100;
public:
    void changeName(std::string& newName);
    void changeHealth(int& newHealth);
    void changeEnergy(int& newEnergy);
    void changeHappiness(int& newHappiness);
    void changeHunger(int& newHunger);
    int getHunger() { return hunger; }      // Add getter
    int getHappiness() { return happiness; } // Add getter
    void setHunger(int newHunger);          // Add setter
    void displayStatus();
};

#endif