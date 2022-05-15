#include"queen_ant.h"
#include<vector>
#include<iostream>

using namespace std;

class colonium : public heap {
	ant* create_fighter();
	ant* create_work_ant();
	ant* create_queen_ant();
	int fighter_count;
	int work_ant_count;
	ant* queen_ant;
	vector<ant*> ants;
public:
	colonium(int fighter_count, int work_ant_count);
	~colonium();
	void print_colonuim_info();
	void turn(world* w);
	void action(world* w);
	void end_turn(world* w);
	void remove_ant(ant* a);
};