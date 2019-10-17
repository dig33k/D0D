#pragma once
#include "MyTypes.h"
#include "Enemy.h"

class Enemy;
class Hero

{
public:
	Hero();
	~Hero();
	CharacterSheet myHero;
	friend void fight(Hero	*ptrhero, Enemy	*ptrenemy);
private:
		
};

