#include <iostream>
#include "dog.h"
#include "fish.h"

int main(){
    // Dog
    Dog *pD = new Dog("Dog", "Billy", 3, "Male", "Land", 5, "Bear");
    pD->getInfor();
    pD->setFavoriteToy("Shoes");
    cout << "\nInfor of dog alter be changed\n";
    pD->getInfor();
    delete pD;

    //Fish
    cout << "\n";
    Fish *pF = new Fish("Fish", "Nemo", 2, "Female", "Aquatic", "Salt Water", {3, 5, 7});
    pF->getInfor();
    pF->setTankSize({6, 7, 3});
    cout << "\n";
    cout << "\nInfor of fish alter be changed\n";
    pF->getInfor();
    delete pF;
    return 0;
}