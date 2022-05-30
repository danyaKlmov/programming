#ifndef WORK_ANT_H
#define WORK_ANT_H

#include"ant.h"

class work_ant : public ant {
public:
	virtual ant_type type() {
		return ant_type::worker;
	}
	work_ant(int health, int protect)
		: ant(health, protect) {
	}
	virtual void resourcing(heap* h) = 0;
	void action(world* w);
	virtual void print_info();
	virtual void print_type();
};

#endif