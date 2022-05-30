#ifndef CRICKET_H
#define CRICKET_H

#include"work_ant.h"

class cricket : public work_ant {
public:
	virtual ant_type type() {
		return ant_type::special;
	}
	cricket()
		:work_ant(26, 5) {

	}
	virtual void resourcing(heap* h);
	virtual void end_turn(world* w);
	virtual void turn(world* w);
	virtual void print_info();
	virtual void print_type();
};

#endif