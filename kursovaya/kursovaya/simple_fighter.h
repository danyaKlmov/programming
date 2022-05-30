#ifndef SIMPLE_FIGHTER_H
#define SIMPLE_FIGHTER_H

#include"fighter.h"

class simple_fighter : public fighter {
public:
	simple_fighter()
		:fighter(1, 1, 0) {

	}
	virtual void print_info();
	virtual void print_type();
};

#endif