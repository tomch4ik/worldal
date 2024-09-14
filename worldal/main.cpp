#include <iostream>
#include "world_animal.h"
using namespace std;

int main()
{
    Continent* africa = new Africa();
    AnimalWorld africanWorld(africa);
    africanWorld.Meals_Herbivores();
    africanWorld.Nutrition_Carnivores();
    Continent* northAmerica = new NorthAmerica();
    AnimalWorld americanWorld(northAmerica);
    americanWorld.Meals_Herbivores();
    americanWorld.Nutrition_Carnivores();
    delete africa;
    delete northAmerica;

    return 0;
}