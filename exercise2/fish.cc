#include "fish.h"

using namespace std;

Fish::Fish(string type, string name, int age, bool gender, string habitat, string waterType, TankSize tankSize)
    :Pet(type, name, age, gender, habitat) {
        this->waterType = waterType;
        this->tankSize = tankSize;
}

Fish::~Fish() {}

void Fish::move() {
    cout << this->getName() << " is swimming\n";
}

void Fish::feed() {
    cout << this->getName() << " is being fed by fish food\n";
}

void Fish::makeSound() {
    cout << this->getName() << " has no sound!\n";
}

string Fish::getWaterType() { return this->waterType; }

TankSize Fish::getTankSize() { return this->tankSize; }

int Fish::getTankArea() { return this->tankSize.l * this->tankSize.w * this->tankSize.h; }

void Fish::getInfor() {
    Pet::getInfor();
    cout << "   - Water Type: " << this->getWaterType() << endl;
    cout << "   - Tank Size: Length - " << this->getTankSize().l << "; Width - " 
            << this->getTankSize().w << "; Height - " << this->getTankSize().h << endl;
    cout << "   - Area of Tank: " << this->getTankArea() << endl;
}

void Fish::setWaterType(string newWaterType) { this->waterType = newWaterType; }

void Fish::setTankSize(TankSize newTankSize) { this->tankSize = newTankSize; }