#include <iostream> 
#include <random>
#include "Interactions.h"
#include "Dice.h"


Interactions::Interactions()
{
}


Interactions::~Interactions()
{
}

void fight(Hero * ptrhero, Enemy * ptrenemy)
{
	Dice dice;
	int roll_result;

	//resolve attack
	double damage_hero = -(ptrhero->myHero.Defence - ptrenemy->myEnemy.Strength);
	double damage_enemy = -(ptrenemy->myEnemy.Defence - ptrhero->myHero.Strength);

	if (damage_hero < 0)
		damage_hero = 0;

	if (damage_enemy < 0)
		damage_enemy = 0;

	//resolve characteristics
	//hero perfect parry or not
	if (dice.trow_dice_six() < 3) {
		ptrhero->myHero.Defence = ptrhero->myHero.Defence - 0.1;
		ptrhero->myHero.Stamina = ptrhero->myHero.Stamina - 0.1;
	}

	ptrenemy->myEnemy.Defence = ptrenemy->myEnemy.Defence - 0.5;
	ptrenemy->myEnemy.Stamina = ptrenemy->myEnemy.Stamina - 0.5;


	ptrhero->myHero.Health = ptrhero->myHero.Health - damage_hero;
	ptrenemy->myEnemy.Health = ptrenemy->myEnemy.Health- damage_enemy;
}
