#pragma once
#include "Warrior.h"
#include "Mage.h"
#include "Rouge.h"
#include "MyTypes.h"
#include "Enemy.h"

class Enemy;
class Daga
{
public:
	Daga();
	~Daga();
	DagaSheet myRouge;
	DagaSheet myMage;
	DagaSheet myWarrior;
	friend void fight(Warrior *ptrhero, Enemy *ptrenemy);
private:
};
