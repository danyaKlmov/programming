#ifndef SIMPLE_TALANT_WORK_ANT_H
#define SIMPLE_TALANT_WORK_ANT_H

#include"work_ant.h"

class simple_talant_work_ant : public work_ant {
	int drop_count;
public:
	simple_talant_work_ant()
		:work_ant(1, 0) {
		drop_count = 0;
	}
	virtual void resourcing(heap* h);
	virtual void end_turn(world* w);
	virtual void print_info();
	virtual void print_type();
};
#endif