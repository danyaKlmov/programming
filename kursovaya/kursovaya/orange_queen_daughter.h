#ifndef ORANGE_QUEEN_DAUGHTER_H
#define ORANGE_QUEEN_DAUGHTER_H

#include"queen_daughter.h"
#include<iostream>

class orange_queen_daughter : public queen_daughter {
public:
	orange_queen_daughter(int number, queen_ant* mom)
		:queen_daughter("Дочь Беатрикс " + to_string(number), 25, 29, 8, 3, 10, mom) {

	}
	virtual void laying_of_larvae();
	virtual void print_type();
};

#endif