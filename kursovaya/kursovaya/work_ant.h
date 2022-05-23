#include"ant.h"

class work_ant : public ant {
public:
	work_ant(int health, int protect)
		: ant(health, protect) {
	}
	void resourcing(heap* h);
	void action(world* w);
	void virtual print_info();
	void virtual print_type();
};