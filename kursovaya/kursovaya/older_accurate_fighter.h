#ifndef OLDER_ACCURATE_FIGHTER_H
#define OLDER_ACCURATE_FIGHTER_H

#include"fighter.h"

class older_accurate_fighter : public fighter {
public:
	older_accurate_fighter()
		:fighter(2, 2, 1) {

	}
	void attack(ant* enemy);
	void action(world* w);
	virtual void print_info();
	virtual void print_type();
};

#endif