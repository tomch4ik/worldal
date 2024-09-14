#include "world_animal.h"
#include <iostream>

using namespace std;

Lion::Lion(int p) : power(p) {}

int Lion::getPower() const {
    return power;
}

void Lion::kill_Animal(Peace_animal* peace_animal) 
{
    if (peace_animal->Dead_or_Alive())
    {
        if (power > peace_animal->getWeight())
        {
            power += 10;
            peace_animal->die();
            cout << "Lion eat animal. Power: " << power << endl;
        }
        else
        {
            power -= 10;
            cout << "Lion didn't eat animal. Power: " << power << endl;
        }
    }
}


Wolf::Wolf(int p) : power(p) {}

int Wolf::getPower() const 
{
    return power;
}

void Wolf::kill_Animal(Peace_animal* peace_animal) 
{
    if (peace_animal->Dead_or_Alive()) 
    {
        if (power > peace_animal->getWeight())
        {
            power += 10;
            peace_animal->die();
            cout << "Wolf eat animal. Power: " << power << endl;
        }
        else 
        {
            power -= 10;
            cout << "Lion didn't eat animal. Power: " << power << endl;
        }
    }
}