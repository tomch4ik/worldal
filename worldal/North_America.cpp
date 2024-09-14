#include "world_animal.h"

Peace_animal* NorthAmerica::add_Peace_animal() const
{
    return new Bison(50);
}

Hunter_animal* NorthAmerica::add_Hunter_animal() const
{
    return new Wolf(80);
}