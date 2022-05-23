#include<vector>
#include"colonium.h"

using namespace std;

class world {
	int heap_count;
	int colonium_count;
	heap* create_heap();
	vector<heap*> heaps;
	vector<colonium*> coloniums;
public:
	colonium* create_colonium(ant* queen);
	void add_colonium(colonium*);
	colonium* create_colonium();
	world(int heap_count, int colonium_count);
	~world();
	void start_game();
	void print_turn_preamble(int turn_number, int time);
	int get_colonium_count() {
		return colonium_count;
	}
	int get_heap_count() {
		return heap_count;
	}
	heap* get_heap(int number) {
		return heaps[number];
	}
	colonium* get_colonium(int number) {
		return coloniums[number];
	}
};
