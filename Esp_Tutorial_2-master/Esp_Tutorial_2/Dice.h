#pragma once
#include <random>
class Dice
{
public:
	Dice();
	~Dice();
	//dice trows definitions
	int trow_dice_six();
	int trow_dice_twelve();
	int trow_dice_enemy_attack();

	//dice change limits
	void change_upper_limit(int lim_sup);
private:
	//main random device
	//https://cpppatterns.com/patterns/choose-random-element.html
	std::random_device random_device;
	std::mt19937 engine{ random_device() };
	//random dices
	std::uniform_int_distribution<int> dice_six;
	std::uniform_int_distribution<int> dice_twelve;
	//random dice for specific actions
	//random dice select enemy that will attack 
	std::uniform_int_distribution<int> dice_enemy_attack;
};

