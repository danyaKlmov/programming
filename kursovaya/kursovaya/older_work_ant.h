#ifndef OLDER_WORK_ANT_H
#define OLDER_WORK_ANT_H

#include"work_ant.h"

class older_work_ant : public work_ant {
	bool has_stick;
public:
	older_work_ant()
		:work_ant(2, 1) {
		has_stick = false;
	}
	virtual void resourcing(heap* h);
	virtual void end_turn(world* w);
	virtual void print_info();
	virtual void print_type();
};
#endif