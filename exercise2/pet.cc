#include "pet.h"

Pet::Pet (string type, string name, int age, bool gender, string habitat) {
    this->type = type;
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->habitat = habitat;
}

Pet::~Pet() {}

string Pet::getType() { return this->type; }

string Pet::getName() { return this->name; }

int Pet::getAge() { return this->age; }

string Pet::getGender() { return ( this->gender ? "Male" : "Female" ); }

string Pet::getHabitat() { return this->habitat; }

void Pet::getInfor() {
    cout << "Information:\n";
    cout << "   - Type: " <<  this->getType() << endl;
    cout << "   - Name: " << this->getName() << endl;
    cout << "   - Age: " << this->getAge() << endl;
    cout << "   - Gender: " << this->getGender() << endl;
    cout << "   - Habitat: " << this->getHabitat() << endl;
}

void Pet::setType(string newType) { this->type = newType; }

void Pet::setName(string newName) { this->name = newName; }

void Pet::setAge(int newAge) { this->age = newAge; }

void Pet::setGender(string newGender){ 
    if (newGender == "Male") this->gender = true;
    else if (newGender == "Female") this->gender = false;
    else cout << "Gender must is Male or Female!\n";
}

void Pet::setHabitat(string newHabitat) { this->habitat = newHabitat; }