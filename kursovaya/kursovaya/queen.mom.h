#include"ant.h"
#include"colonium.h"
#include"queen_ant.h"
#include<iostream>

class queen_ant_mom : public queen_ant {
public:
	void virtual laying_of_larvae(colonium* h) = 0;
	void turn();
	void print_type() {
		cout << "queen mom";
	}
	queen_ant_mom(const string& name, int health, int attack, int protect, int time_laying_of_larvae, int larvae_count)
		: queen_ant(name, health, attack, protect, time_laying_of_larvae, larvae_count) {
	}
};