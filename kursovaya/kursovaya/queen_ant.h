#ifndef QUEEN_ANT_H
#define QUEEN_ANT_H

#include"ant.h"
#include"fighter.h"
#include<string>

using namespace std;

class world;
class colonium;
class queen_ant : public fighter {
protected:
	int time_laying_of_larvae;
	string name;
	int time_of_last_laying;
	int larvae_count;
	ant* larvae;
	virtual bool check_parentness(queen_ant*) = 0;
public:
	virtual ant_type type() {
		return ant_type::queen;
	}
	bool is_relative(queen_ant*);
	virtual void laying_of_larvae() = 0;
	void action(world* w);
	void end_turn(world* w);
	virtual void print_info();
	queen_ant(const string& name, int health, int attack, int protect, int time_laying_of_larvae, int larvae_count)
		: fighter(attack, health, protect) {
		this->larvae = nullptr;
		this->time_of_last_laying = 0;
		this->larvae_count = larvae_count;
		this->name = name;
		this->time_laying_of_larvae = time_laying_of_larvae;
	}
	string get_name() const {
		return name;
	}
};

#endif