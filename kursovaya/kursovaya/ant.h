#include<iostream>

using namespace std;

class world;
class colonium;
class heap;
class ant {
protected:
	ant* queen;
	colonium* _colonium;
	int health, protect;
	heap* current_heap;
public:
	void virtual print_type() = 0;
	bool virtual take_damage(int damage, ant* enemy);
	ant* get_queen() {
		return queen;
	}
	colonium* get_colonium() {
		return _colonium;
	}
	void set_queen(ant* queen) {
		this->queen = queen;
	}
	void set_colonium(colonium* colonium) {
		this->_colonium = colonium;
	}
	ant(int health, int protect) {
		this->health = health;
		this->protect = protect;
		_colonium = nullptr;
		queen = nullptr;
		current_heap = nullptr;
	}
	int get_health() {
		return health;
	}
	int get_protect() {
		return protect;
	}
	void virtual turn(world* w);
	void virtual action(world* w) = 0;
	void virtual end_turn(world* w);
	void virtual print_info() = 0;
	virtual ~ant() {}
};
