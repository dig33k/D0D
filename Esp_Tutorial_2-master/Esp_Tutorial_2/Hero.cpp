
#include "Mage.h"
#include "Dice.h"
#include "Rouge.h"
#include "Warrior.h"
#include "MagicStaff.h"
#include "Daga.h"
#include "BigSword.h"
#include "Interactions.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Choose your champ"; "1 Mage, 2 Rouge, 3 Warrior";
	//quiero llamar a teclado
	string num;
	cin >> num;
	//(Mage = (1), Rouge = (2), Warrior : (3)); //Quiero igualar el numero al camepeón
	cout << "You chose" << num <<  endl;
	cout << "Now choose your weapon"; "4 Magic staff, 5 Daga, 6 Big sword";
	string num;
	cin >> num;
	cout << "You chose" << num << endl;
}


Hero::Hero()
{
	myHero.Health = 100.0;
	myHero.Strength = 10.0;
	myHero.Defence = 10.0;
	myHero.Stamina = 8.0;
}


Hero::~Hero()
{
}

Mage::Mage()
{
	int Mage = 1;
		myMage.Health = 100.0;
		myMage.Defence = 10.0;
		myMage.Strength = Dice::trow_dice_six(+1);//máximo 7 lanzar dado de 6 más uno (quiero que mymage.strenght sea igual a lanzar el dado de 6 y sumar al resultado 1
		myMage.Constitution = //máximo 7 lanzar dado de 6 más uno
		myMage.Charisma = //máximo 10 lanzar dado de 12 menos dos
		myMage.Intelligence = //máximo 10 lanzar dado de 12 menos dos
		myMage.Wisdom = //máximo 10 lanzar dado de 12 menos dos
		myMage.Dexterity = //máximo 8 lanzar dado de 6 más dos
}

Mage::~Mage()
{
}

Rouge::Rouge() 
{
	int Rouge = 2;
	myRouge.Health = 100.0;
	myRouge.Defence = 10.0;
	myRouge.Strength = Dice::trow_dice_six(+2);//máximo 7 lanzar dado de 6 más uno
	myRouge.Constitution = //máximo 7 lanzar dado de 6 más uno
	myRouge.Charisma = //máximo 10 lanzar dado de 12 menos dos
	myRouge.Intelligence = //máximo 10 lanzar dado de 12 menos dos
	myRouge.Wisdom = //máximo 10 lanzar dado de 12 menos dos
	myRouge.Dexterity = //máximo 8 lanzar dado de 6 más dos
}

Rouge::~Rouge() 
{
}

Warrior::Warrior()
{
	int Warrior = 3;
	myWarrior.Health = 100.0;
	myWarrior.Defence = 10.0;
	myWarrior.Strength = Dice::trow_dice_six(+2);//máximo 7 lanzar dado de 6 más uno
	myWarrior.Constitution = //máximo 7 lanzar dado de 6 más uno
	myWarrior.Charisma = //máximo 10 lanzar dado de 12 menos dos
	myWarrior.Intelligence = //máximo 10 lanzar dado de 12 menos dos
	myWarrior.Wisdom = //máximo 10 lanzar dado de 12 menos dos
	myWarrior.Dexterity = //máximo 8 lanzar dado de 6 más dos
}

Warrior::~Warrior()
{

}

MagicStaff::MagicStaff()
{
	int MagicStaff = 4;
	myMage.Intelligence = 10;
	myMage.Wisdom = 9;
	myMage.Damage = 8;
	myWarrior.Damage = 2;
	myRouge.Damage = 1;
}

MagicStaff::~MagicStaff()
{
}

Daga::Daga()
{
	int Daga = 5;
	myRouge.Charisma = 8;
	myRouge.Damage = 9;
	myRouge.Dexterity = 10;
	myMage.Damage = 2;
	myWarrior.Damage = 3;
}

Daga::~Daga()
{
}

BigSword::BigSword()
{
	int BigSword = 6;
	myWarrior.Constitution = 9;
	myWarrior.Strength = 9;
	myWarrior.Damage = 10;
	myMage.Damage = 3;
	myRouge.Damage = 4;
}
BigSword::~BigSword()
{
}