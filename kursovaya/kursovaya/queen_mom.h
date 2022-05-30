#ifndef QUEEN_MOM_H
#define QUEEN_MOM_H

#include"ant.h"
#include"colonium.h"
#include"queen_ant.h"
#include<iostream>

class queen_mom : public queen_ant {
protected:
	int daughter_count;
	bool check_parentness(queen_ant*);
public:
	void turn(world* w);
	void print_type();
	void print_info();
	queen_mom(const string& name, int health, int attack, int protect, int time_laying_of_larvae, int larvae_count, int min_daughter_count, int max_daughter_count)
		: queen_ant(name, health, attack, protect, time_laying_of_larvae, larvae_count) {
		daughter_count = min_daughter_count + rand() % (max_daughter_count - min_daughter_count + 1);
	}
};

#endif