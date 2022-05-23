#include"ant.h"

class world;
class fighter : public ant {
	int strength;
	bool already_attack;
public:
	void print_type();
	bool take_damage(int damage, ant* enemy);
	fighter(int attack, int health, int protect)
		: ant(health, protect) {
		this->strength = attack;
		this->already_attack = false;
	}
	void attack(ant* enemy); 
	void action(world* w);
	void virtual print_info();
	virtual ~fighter() {}
};