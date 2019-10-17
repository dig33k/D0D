#include <random>
#include "Enemy.h"



Enemy::Enemy()
{
	//https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_real_distribution<double> dist_1(65, 100);//(65.0, 100.0);

	myEnemy.Health = dist_1(mt);

	std::uniform_real_distribution<double> dist_2(5, 10);//(5.0, 10.0);
	myEnemy.Strength = dist_2(mt);
	myEnemy.Defence = dist_2(mt);
	myEnemy.Stamina = dist_2(mt);
}


Enemy::~Enemy()
{
}
