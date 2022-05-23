#include"ant.h"
#include"fighter.h"
#include<string>

using namespace std;

class world;
class colonium;
class queen_ant : public fighter {
protected:
	int time_laying_of_larvae;
	string name;
	int time_of_last_laying;
	int larvae_count;
	ant* larvae;
public:
	void virtual laying_of_larvae() = 0;
	void turn(world* w);
	void action(world* w);
	void end_turn(world* w);
	void virtual print_info();
	queen_ant(const string& name, int health, int attack, int protect, int time_laying_of_larvae, int larvae_count)
		: fighter(attack, health, protect) {
		this->larvae = nullptr;
		this->time_of_last_laying = 0;
		this->larvae_count = larvae_count;
		this->name = name;
		this->time_laying_of_larvae = time_laying_of_larvae;
	}
	string get_name() const {
		return name;
	}
};