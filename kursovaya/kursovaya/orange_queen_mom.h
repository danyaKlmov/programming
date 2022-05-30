#ifndef ORANGE_QUEEN_MOM_H
#define ORANGE_QUEEN_MOM_H

#include"queen_mom.h"
#include<iostream>

class orange_queen_mom : public queen_mom {
public:
	orange_queen_mom() 
		:queen_mom("Беатрикс", 25, 29, 8, 3, 10, 1, 4) {

	}
	virtual void laying_of_larvae();
	virtual void print_type();
};

#endif