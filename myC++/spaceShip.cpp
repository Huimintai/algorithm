#include<iostream>

struct EnemySpaceShip
{
	int x_coordinate;
	int y_coordinate;
	int weapon_power;
	EnemySpaceShip* p_next_enemy;
};

EnemySpaceShip* p_enemies = NULL;

EnemySpaceShip* getNewEnemy ()
{
	EnemySpaceShip* p_ship = new EnemySpaceShip;
	p_ship->x_coordinate = 0;
	p_ship->y_coordinate = 0;
	p_ship->weapon_power = 20;
	p_ship->p_next_enemy = p_enemies;
	p_enemies = p_ship;
	return p_ship;
}

EnemySpaceShip* addNewEnemyToList (EnemySpaceShip* p_list)
{
	EnemySpaceShip* p_ship = new EnemySpaceShip;
	p_ship->x_coordinate = 0;
	p_ship->y_coordinate = 0;
	p_ship->weapon_power = 20;
	p_ship->p_next_enemy = p_list;
	return p_ship;
}

EnemySpaceShip* p_current = p_enemies;

while (p_current != NULL)
{
	upgradeweapons(p_current);
	p_current = p_current->p_next_enemy;
}
