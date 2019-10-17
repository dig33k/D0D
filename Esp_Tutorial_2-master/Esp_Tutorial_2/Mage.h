#pragma once
#include "MyTypes.h"
#include "Enemy.h"

class Enemy;
class Mage
{
public:
	Mage();
	~Mage();
	MageSheet myMage;
	MagicStaffSheet myMagicstaff;
	DagaSheet myDaga;
	BigSwordSheet myBigSword;
	void fight(Mage * ptrhero, Enemy * ptrenemy)//tuve que quitarle friend a void ¿porqué?
	{
	}

private:
};