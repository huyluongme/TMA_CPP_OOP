#include "dog.h"

Dog::Dog(string type, string name, int age, bool gender, string habitat, int trainingLevel, string favoriteToy)
    : Pet(type, name, age, gender, habitat) {
    this->trainingLevel = trainingLevel;
    this->favoriteToy = favoriteToy;
} 

Dog::~Dog() {}

void Dog::move() {
    cout << this->getName() << " is walking\n";
}

void Dog::feed() {
    cout << this->getName() << " is being fed by dog food\n";
}

void Dog::makeSound() {
    std::cout << this->getName() << " is saying: Woof woof!\n";
}

int Dog::getTrainingLevel() { return this->trainingLevel; }

string Dog::getFavoriteToy() { return this->favoriteToy; }

void Dog::getInfor() {
    Pet::getInfor();
    cout << "   - Training Level: " << this->getTrainingLevel() << endl;
    cout << "   - Favorite Toy: " << this->getFavoriteToy() << endl;
}

void Dog::setTrainingLevel(int newLevel) { this->trainingLevel = newLevel; }

void Dog::setFavoriteToy(string newToy) { this->favoriteToy = newToy; }

