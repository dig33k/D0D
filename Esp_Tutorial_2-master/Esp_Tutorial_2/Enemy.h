#pragma once
#include "MyTypes.h"
#include "Hero.h"

class Hero;
class Enemy
{
public:
	Enemy();
	~Enemy();
	CharacterSheet myEnemy;
	friend void fight(Hero	*ptrhero, Enemy	*ptrenemy);
private:
	
};

