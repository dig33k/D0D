#include "Dice.h"



Dice::Dice()
{
	dice_six = std::uniform_int_distribution<int>(1, 6);
	dice_twelve	= std::uniform_int_distribution<int>(1, 12);
	dice_enemy_attack = std::uniform_int_distribution<int>(1, 1);
}


Dice::~Dice()
{
}

int Dice::trow_dice_six()
{
	return dice_six(engine);
}

int Dice::trow_dice_twelve()
{
	return dice_twelve(engine);
}

int Dice::trow_dice_enemy_attack()
{
	return dice_enemy_attack(engine);
}

void Dice::change_upper_limit(int lim_sup)
{
	dice_enemy_attack = std::uniform_int_distribution<int>(0, lim_sup-1);
}
