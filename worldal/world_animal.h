#pragma once

class Peace_animal
{
public:
    virtual ~Peace_animal() {}
    virtual int getWeight() const = 0;
    virtual bool Dead_or_Alive() const = 0;
    virtual void food() = 0;
    virtual void die() = 0;
};
class Hunter_animal
{
public:
    virtual ~Hunter_animal() {}
    virtual int getPower() const = 0;
    virtual void kill_Animal(Peace_animal* papeace_animal) = 0;
};
class Continent
{
public:
    virtual ~Continent() {}
    virtual Peace_animal* add_Peace_animal() const = 0;
    virtual Hunter_animal* add_Hunter_animal() const = 0;
};
class Wildebeest : public Peace_animal
{
    int weight;
    bool alive;
public:
    Wildebeest(int w);
    int getWeight() const;
    bool Dead_or_Alive() const;
    void food();
    void die();
};
class Bison : public Peace_animal
{
    int weight;
    bool alive;
public:
    Bison(int w);
    int getWeight() const;
    bool Dead_or_Alive() const;
    void food();
    void die();
};
class Lion : public Hunter_animal
{
    int power;

public:
    Lion(int p);
    int getPower() const;
    void kill_Animal(Peace_animal* peace_animal);
};
class Wolf : public Hunter_animal {
    int power;

public:
    Wolf(int p);
    int getPower() const;
    void kill_Animal(Peace_animal* peace_animal);
};
class Africa : public Continent
{
public:
    Peace_animal* add_Peace_animal() const;
    Hunter_animal* add_Hunter_animal() const;
};
class NorthAmerica : public Continent
{
public:
    Peace_animal* add_Peace_animal() const;
    Hunter_animal* add_Hunter_animal() const;
};
class AnimalWorld
{
    Peace_animal* peace_animal;
    Hunter_animal* hunter_animal;

public:
    AnimalWorld(const Continent* continent);
    ~AnimalWorld();
    void Meals_Herbivores();
    void Nutrition_Carnivores();
};

