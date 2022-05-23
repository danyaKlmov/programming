#include"ant.h"
#include"colonium.h"
#include"queen_ant.h"
#include<iostream>

class queen_mom : public queen_ant {
public:
	void virtual laying_of_larvae();
	void turn(world* w);
	void virtual print_info();
	void print_type();
	queen_mom(const string& name, int health, int attack, int protect, int time_laying_of_larvae, int larvae_count)
		: queen_ant(name, health, attack, protect, time_laying_of_larvae, larvae_count) {
	}
};