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
};
