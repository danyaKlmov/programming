#include"ant.h"
#include"colonium.h"
#include"queen_ant.h"
#include<iostream>

class queen_daughter : public queen_ant {
	bool exile;
	void exile_daughter(world* w);
public:
	void virtual laying_of_larvae();
	void turn(world* w);
	void print_info();
	void print_type();
	queen_daughter(const string& name, int health, int attack, int protect, int time_laying_of_larvae, int larvae_count)
		: queen_ant(name, health, attack, protect, time_laying_of_larvae, larvae_count) {
		exile = false;
	}
};