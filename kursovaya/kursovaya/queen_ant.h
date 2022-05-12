#include"ant.h"
#include<string>

using namespace std;

class colonium;
class queen_ant : public fighter_ant {
	int larvae_count;
	int time_laying_of_larvae;
	string name;
public:
	void virtual laying_of_larvae(colonium* h) = 0;
	void turn();
	void virtual print_type() = 0;
	queen_ant(const string& name, int health, int attack, int protect, int time_laying_of_larvae, int larvae_count)
		: fighter_ant(attack, health, protect) {
		this->larvae_count = larvae_count;
		this->name = name;
		this->time_laying_of_larvae = time_laying_of_larvae;
	}
	string get_name() const {
		return name;
	}
};