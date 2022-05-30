#ifndef SIMPLE_STOCKY_WORK_ANT_H
#define SIMPLE_STOCKY_WORK_ANT_H

#include"work_ant.h"

class simple_stocky_work_ant : public work_ant {
	int drop_count;
	bool be_attacked;
public:
	simple_stocky_work_ant()
		:work_ant(1, 0) {
		drop_count = 0;
		be_attacked = false; 
	} 
	virtual void resourcing(heap* h);
	virtual void end_turn(world* w);
	virtual bool take_damage(int damage, ant* enemy);
	virtual void print_info();
	virtual void print_type();
};
#endif