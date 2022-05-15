#include"colonium.h"

class ant {
	ant* queen;
	colonium* colonium;
	int health, protect;
public:
	bool take_damage(int damage) {
		health = health - (protect - damage);
		return health <= 0;
	}
	ant* get_queen() {
		return queen;
	}
	colonium* get_colonium() {
		return colonium;
	}
	void set_queen(ant* queen) {
		this->queen = queen;
	}
	void set_colonium(colonium* colonium) {
		this->colonium = colonium;
	}
	ant(int health, protect) {
		this->health = health;
		this->protect = protect;
	}
	int get_health() {
		return health;
	}
	int get_protect() {
		return protect;
	}
	void virtual turn(world* w);
	void virtual action(world* w) = 0;
	void end_turn(world* w);
	virtual ~ant() {}
};
