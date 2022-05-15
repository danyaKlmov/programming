#include"heap.h"
#include"colonium.h"
#include<vector>

using namespace std;

class world {
	int heap_count;
	int colonium_count;
	heap* create_heap();
	colonium* create_colonium();
	vector<heap*> heaps;
	vector<colonium*> coloniums;
public:
	world(int heap_count, int colonium_count);
	~world();
	void start_game();
	void print_turn_preamble(int turn_number);
	int get_colonium_count() {
		return get_colonium_count;
	}
	int get_heap_count() {
		return get_heap_count;
	}
	heap* get_heap(int number) {
		return heaps[number];
	}
	colonium* get_colonium(int number) {
		return colonuims[number];
	}
};
