#include <vector>
#include "Dice.h"
#include "Hero.h"
#include "enemy.h"
#include "Interactions.h"

int main()
{
	//initialize our hero and enemies
	Dice dices;
	Hero hero;
	Enemy enemy;
	int id_enemy;
	std::vector<Enemy> enemies;
	int killcount = 0;
	int roll_result;

	//original enemies
	for (int i = 1; i <= 5; i++) {
		Enemy enemy;
		enemies.push_back(enemy);
	}
	
	//Fight hero vs enemy;
	while (enemies.size() > 0){
		dices.change_upper_limit(enemies.size());
		id_enemy = dices.trow_dice_enemy_attack();
		
		fight(&hero, &enemies[id_enemy]);
		if (hero.myHero.Health<=0) {
			break;
		}
		if (enemies[id_enemy].myEnemy.Health <= 0) {
			enemies.erase(enemies.begin() + id_enemy);
			killcount++;
		}
		//generate new enemy
		roll_result = dices.trow_dice_six() + dices.trow_dice_six() + dices.trow_dice_six() + dices.trow_dice_six();
		//roll_result = dices.trow_dice_twelve() + dices.trow_dice_twelve();
		if (roll_result >= 21) {
			Enemy enemy;
			enemies.push_back(enemy);
		}
	}
	
	return 0;
}