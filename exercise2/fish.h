#ifndef FISH_H
#define FISH_H

#include "pet.h"

struct TankSize {
    int l, w, h;
};


class Fish : public Pet {
private:
    string waterType;
    TankSize tankSize;

public:
    Fish(string type, string name, int age, bool gender, string habitat, string waterType, TankSize tankSize);
    ~Fish();
    
    void        move()         override;
    void        feed()         override;
    void        makeSound()    override;

    string      getWaterType();
    TankSize    getTankSize();
    int         getTankArea();
    void        getInfor();

    void        setWaterType(string newWaterType);
    void        setTankSize(TankSize newTankSize); 
};

#endif