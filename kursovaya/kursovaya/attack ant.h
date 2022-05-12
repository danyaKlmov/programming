#include"ant.h"
#include"heap.h"

class attack_ant : public ant {
public:
	void virtual travel(heap* h) = 0;
	void virtual attack(ant* h) = 0;
	void turn();
};