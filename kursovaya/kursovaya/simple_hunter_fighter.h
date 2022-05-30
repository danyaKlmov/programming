#ifndef SIMPLE_HUNTER_FIGHTER_H
#define SIMPLE_HUNTER_FIGHTER_H

#include"fighter.h"

class simple_hunter_fighter : public fighter {
public:
	simple_hunter_fighter()
		:fighter(1, 1, 0) {

	}
	void action(world* w);
	virtual void print_info();
	virtual void print_type();
};

#endif