#ifndef ANT_H
#define ANT_H

#include<iostream>

using namespace std;

class queen_ant;
class world;
class colonium;
class heap;
enum class ant_type
{
	worker, fighter, special, queen
};
class ant {
protected:
	queen_ant* queen;
	colonium* _colonium;
	int health, protect;
	heap* current_heap;
public:
	virtual ant_type type() = 0;
	virtual bool is_invulnerable() {
		return false;
	}
	void set_health(int new_health) {
		health = new_health;
	}
	virtual bool can_be_attacked(ant* attacker);
	virtual void print_type() = 0;
	virtual bool take_damage(int damage, ant* enemy);
	queen_ant* get_queen() {
		return queen;
	}
	colonium* get_colonium() {
		return _colonium;
	}
	void set_queen(queen_ant* queen) {
		this->queen = queen;
	}
	void set_colonium(colonium* colonium) {
		this->_colonium = colonium;
	}
	ant(int health, int protect) {
		this->health = health;
		this->protect = protect;
		_colonium = nullptr;
		queen = nullptr;
		current_heap = nullptr;
	}
	int get_health() {
		return health;
	}
	int get_protect() {
		return protect;
	}
	virtual void turn(world* w);
	virtual void action(world* w) = 0;
	virtual void end_turn(world* w);
	virtual void print_info() = 0;
	virtual ~ant() {}
};

#endif