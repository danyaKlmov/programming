#include"ant.h"
#include"colonium.h"
#include"queen_ant.h"
#include<iostream>

class queen_ant_daughter : public queen_ant {
public:
	void virtual laying_of_larvae(colonium* h) = 0;
	void turn(world* w);
	void action(world* w);
	void end_turn(world* w);
	void print_type() {
		cout << "queen daughter";
	}
	queen_ant_daughter(const string& name, int health, int attack, int protect, int time_laying_of_larvae, int larvae_count)
		: queen_ant(name, health, attack, protect, time_laying_of_larvae, larvae_count) {
	}
};