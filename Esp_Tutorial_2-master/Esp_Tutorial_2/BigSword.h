#pragma once
#include "Warrior.h"
#include "Mage.h"
#include "Rouge.h"
#include "MyTypes.h"
#include "Enemy.h"

class Enemy;
class BigSword
{
public:
	BigSword();
	~BigSword();
	BigSwordSheet myWarrior;
	BigSwordSheet myMage;
	BigSwordSheet myRouge;
	friend void fight(Warrior *ptrhero, Enemy *ptrenemy);
private:
};

