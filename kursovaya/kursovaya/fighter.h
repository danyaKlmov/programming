#ifndef FIGHTER_H
#define FIGHTER_H

#include"ant.h"

class world;
class fighter : public ant {
protected:
	int strength;
	bool already_attack;
public:
	virtual ant_type type() {
		return ant_type::fighter;
	}
	void print_type();
	bool take_damage(int damage, ant* enemy);
	fighter(int attack, int health, int protect)
		: ant(health, protect) {
		this->strength = attack;
		this->already_attack = false;
	}
	void attack(ant* enemy); 
	void action(world* w);
	virtual void print_info();
	virtual ~fighter() {}
};

#endif