#include "world_animal.h"

Peace_animal* Africa::add_Peace_animal() const
{
    return new Wildebeest(60);  
}

Hunter_animal* Africa::add_Hunter_animal() const
{
    return new Lion(50);  
}