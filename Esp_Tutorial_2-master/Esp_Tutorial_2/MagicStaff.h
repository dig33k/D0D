#pragma once
#include "Warrior.h"
#include "Mage.h"
#include "Rouge.h"
#include "MyTypes.h"
#include "Enemy.h"

class Enemy;
class MagicStaff
{
public:
	MagicStaff();
	~MagicStaff();
	MagicStaffSheet myMage;
	MagicStaffSheet myWarrior;
	MagicStaffSheet myRouge;
	friend void fight(Warrior *ptrhero, Enemy *ptrenemy);
private:
};
