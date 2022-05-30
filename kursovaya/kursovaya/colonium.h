#ifndef COLONIUM_H
#define COLONIUM_H

#include<vector>
#include<iostream>
#include<string>
#include"heap.h"

using namespace std;

class queen_ant;
class ant;
class world;
class colonium : public heap {
	queen_ant* colonium_queen_ant;
	vector<ant*> workers;
	vector<ant*> fighters;
	vector<ant*> specials;
public:
	int get_specials_count() {
		return specials.size();
	}
	int get_workers_count() {
		return workers.size();
	}
	int get_fighters_count() {
		return fighters.size();
	}
	colonium(const string& name);
	~colonium();
	void set_queen(queen_ant* queen);
	queen_ant* get_queen() {
		return colonium_queen_ant;
	}
	void add_ant(ant* a);
	void print_colonuim_info();
	void turn(world* w);
	void action(world* w);
	void end_turn(world* w);
	void remove_ant(ant* a);
};

#endif