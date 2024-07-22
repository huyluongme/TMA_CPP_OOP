#ifndef DOG_H
#define DOG_H

#include "pet.h"

class Dog : public Pet {
private:
    int trainingLevel;
    string favoriteToy;

public:
    Dog(string type, string name, int age, bool gender, string habitat, int trainingLevel, string favoriteToy);
    ~Dog();
    
    void    move()         override;
    void    feed()         override;
    void    makeSound()    override;

    int     getTrainingLevel();
    string  getFavoriteToy();
    void    getInfor();

    void    setTrainingLevel(int newLevel);
    void    setFavoriteToy(string newToy);
};

#endif  