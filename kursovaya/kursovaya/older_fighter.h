#ifndef OLDER_FIGHTER_H
#define OLDER_FIGHTER_H

#include"fighter.h"

class older_fighter : public fighter {
public:
	older_fighter()
		:fighter(2, 2, 1) {

	}
	virtual void print_info();
	virtual void print_type();
};

#endif