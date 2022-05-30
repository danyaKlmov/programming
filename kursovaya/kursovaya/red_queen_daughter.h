#ifndef RED_QUEEN_DAUGHTER_H
#define RED_QUEEN_DAUGHTER_H

#include"queen_daughter.h"
#include<iostream>

class red_queen_mom;
class red_queen_daughter : public queen_daughter {
public:
	red_queen_daughter(int number, queen_ant* mom)
		:queen_daughter("Дочь Анны " + to_string(number), 25, 28, 5, 3, 10, mom) {

	}
	virtual void laying_of_larvae();
	virtual void print_type();
};

#endif