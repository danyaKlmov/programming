#ifndef WORLD_H
#define WORLD_H

#include<vector>
#include<fstream>
#include"colonium.h"

using namespace std;

class world {
	int lizard_day;
	int lizard_remain_time;
	vector<heap*> heaps;
	vector<colonium*> coloniums;
	colonium* create_red_colonium();
	colonium* create_orange_colonium();
	void create_heaps();
	void process_lizard();
public:
	void print_world_info(int turns_to_drought);
	void print_colonium_info();
	void print_heap_info();
	void observe_info(int turns_to_drought);
	void add_colonium(colonium*);
	world();
	~world();
	void start_game(ofstream& output_file);
	void print_turn_preamble(int turn_number, int time);
	int get_colonium_count() {
		return coloniums.size();
	}
	int get_heap_count() {
		return heaps.size();
	}
	heap* get_heap(int number) {
		return heaps[number];
	}
	colonium* get_colonium(int number) {
		return coloniums[number];
	}
};

#endif
