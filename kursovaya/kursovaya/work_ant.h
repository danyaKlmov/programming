#include"ant.h"
#include"heap.h"

class work_ant : public ant {
public:
	work_ant(int health, int protect)
		: ant(health, protect) {
	}
	void virtual travel(heap* h) = 0;
	void virtual resourcing(heap* h) = 0;
	void turn();
};