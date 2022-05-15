#include"ant.h"
#include"heap.h"

class fighter : public ant {
	int attack;
public:
	fighter(int attack, int health, int protect)
		: ant(health, protect) {
		this->attack = attack;
	}
	void virtual travel(heap* h) = 0;
	void attack(ant* enemy);
	void turn(world* w);
	void action(world* w);
	void end_turn(world* w);
	virtual ~fighter() {}
};