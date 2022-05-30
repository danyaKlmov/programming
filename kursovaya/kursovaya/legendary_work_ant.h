#ifndef LEGENDARY_WORK_ANT_H
#define LEGENDARY_WORK_ANT_H

#include"work_ant.h"

class legendary_work_ant : public work_ant {
	int stick_count;
	int rock_count;
	int drop_count;
public:
	legendary_work_ant()
		:work_ant(10, 6) {
		drop_count = 0;
		stick_count = 0;
		rock_count = 0;
	}
	virtual void resourcing(heap* h);
	virtual void end_turn(world* w);
	virtual void print_info();
	virtual void print_type();
};
#endif