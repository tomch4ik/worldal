#include "world_animal.h"
#include <iostream>

using namespace std;

AnimalWorld::AnimalWorld(const Continent* continent) {
    peace_animal = continent->add_Peace_animal();
    hunter_animal = continent->add_Hunter_animal();
}

AnimalWorld::~AnimalWorld() {
    delete peace_animal;
    delete hunter_animal;
}

void AnimalWorld::Meals_Herbivores() 
{
    peace_animal->food();
}

void AnimalWorld::Nutrition_Carnivores()
{
    hunter_animal->kill_Animal(peace_animal);
}