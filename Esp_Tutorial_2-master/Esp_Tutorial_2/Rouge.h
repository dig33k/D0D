#pragma once
#include "MyTypes.h"
#include "Enemy.h"

class Enemy;
class Rouge
{
public:
	Rouge();
	~Rouge();
	RougeSheet myRouge;
	friend void fight(Rouge	*ptrhero, Enemy	*ptrenemy);
private:
}; 
