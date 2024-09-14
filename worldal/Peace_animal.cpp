#include "world_animal.h"
#include <iostream>

using namespace std;


Wildebeest::Wildebeest(int w) : weight(w), alive(true) {}

int Wildebeest::getWeight() const
{
    return weight;
}

bool Wildebeest::Dead_or_Alive() const 
{
    return alive;
}

void Wildebeest::food() 
{
    if (alive) 
    {
        weight += 10;
        cout << "Wildebeest weight: " << weight << endl;
    }
}

void Wildebeest::die() 
{
    alive = false;
}


Bison::Bison(int w) : weight(w), alive(true) {}

int Bison::getWeight() const
{
    return weight;
}

bool Bison::Dead_or_Alive() const
{
    return alive;
}

void Bison::food() {
    if (alive)
    {
        weight += 10;
        cout << "Bison weight: " << weight << "\n";
    }
}

void Bison::die() 
{
    alive = false;
}
