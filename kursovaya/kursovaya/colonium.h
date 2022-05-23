#include<vector>
#include<iostream>
#include<string>
#include"heap.h"

using namespace std;

class ant;
class world;
class colonium : public heap {
	ant* create_queen_mom();
	int fighter_count;
	int work_ant_count;
	ant* queen_ant;
	vector<ant*> ants;
	string name;
public:
	string get_name();
	ant* create_fighter();
	ant* create_work_ant();
	ant* create_queen_daughter();
	colonium(const string& name, int fighter_count, int work_ant_count);
	colonium(const string& name, int fighter_count, int work_ant_count, ant* queen);
	~colonium();
	void add_ant(ant* a);
	void print_colonuim_info();
	void turn(world* w);
	void action(world* w);
	void end_turn(world* w);
	void remove_ant(ant* a);
};