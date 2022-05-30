#ifndef RED_QUEEN_MOM_H
#define RED_QUEEN_MOM_H

#include"queen_mom.h"
#include<iostream>

class red_queen_mom : public queen_mom {
public:
	red_queen_mom()
		:queen_mom("Анна", 25, 28, 5, 3, 10, 2, 3) {

	}
	virtual void laying_of_larvae();
	virtual void print_type();
};

#endif