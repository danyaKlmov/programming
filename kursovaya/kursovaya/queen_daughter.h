#ifndef QUEEN_DAUGHTER_H
#define QUEEN_DAUGHTER_H

#include"queen_ant.h"
#include<string>

class world;
class colonium;
class queen_daughter : public queen_ant {
	queen_ant* mother;
	bool exile;
	void exile_daughter(world* w);
protected:
	bool check_parentness(queen_ant*);
public:
	virtual colonium* create_own_colonium();
	void turn(world* w);
	void print_type();
	void print_info();
	queen_daughter(const string& name, int health, int attack, int protect, int time_laying_of_larvae, int larvae_count, queen_ant* mother)
		: queen_ant(name, health, attack, protect, time_laying_of_larvae, larvae_count) {
		this->mother = mother;
		exile = false;
	}
};

#endif