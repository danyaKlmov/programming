#ifndef SCARAB_H
#define SCARAB_H

#include"work_ant.h"

class scarab : public work_ant {
	int turn_count;
	int stick_count;
public:
	virtual ant_type type() {
		return ant_type::special;
	}
	scarab() 
		:work_ant(27, 7) {
		turn_count = 0;
		stick_count = 0;
	}
	virtual void resourcing(heap* h);
	virtual void end_turn(world* w);
	virtual bool is_invulnerable();
	virtual void turn(world* w);
	virtual void action(world* w);
	virtual void print_info();
	virtual void print_type();
};

#endif 