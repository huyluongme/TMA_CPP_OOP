#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>

using namespace std;

class Pet {
private:
    string type;
    string name;
    int age;
    bool gender;
    string habitat;

public:
    Pet(string type, string name, int age, bool gender, string habitat);
    ~Pet();
    
    virtual void    move() = 0;
    virtual void    feed() = 0;
    virtual void    makeSound() = 0;
    
    string          getType();
    string          getName();
    int             getAge();
    string          getGender();
    string          getHabitat();
    void            getInfor();

    void            setType(string newType);
    void            setName(string newName);
    void            setAge(int newAge);
    void            setGender(string newGender);
    void            setHabitat(string newHabitat);
};

#endif