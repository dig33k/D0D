#pragma once
#include "MyTypes.h"
#include "Enemy.h"

class Enemy;
class Warrior
{
public:
	Warrior();
	~Warrior();
	WarriorSheet myWarrior;
	friend void fight(Warrior *ptrhero, Enemy *ptrenemy);
private:
};
