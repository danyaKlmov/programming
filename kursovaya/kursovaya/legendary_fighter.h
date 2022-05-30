#ifndef LEGENDARY_FIGHTER_H
#define LEGENDARY_FIGHTER_H

#include"fighter.h"

class legendary_fighter : public fighter {
public:
	legendary_fighter()
		:fighter(4, 10, 6) {

	}
	void action(world* w);
	virtual void print_info();
	virtual void print_type();
};

#endif