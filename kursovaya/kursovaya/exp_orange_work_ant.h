#ifndef EXP_ORANGE_WORK_ANT_H
#define EXP_ORANGE_WORK_ANT_H

#include"work_ant.h"

class exp_orange_work_ant : public work_ant {
	int stick_count;
	int rock_count;
public:
	exp_orange_work_ant()
		:work_ant(6, 2) {
		stick_count = 0;
		rock_count = 0;
	}
	virtual void resourcing(heap* h);
	virtual void end_turn(world* w);
	virtual void print_info();
	virtual void print_type();
};
#endif