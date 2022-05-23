#include"fighter.h"
#include"colonium.h"

void fighter::attack(ant* enemy) {
	already_attack = true;
	cout << "fighter from colonium " << get_colonium()->get_name() << " attack "; 
	enemy->print_type();
	cout << " from colonium " << enemy->get_colonium()->get_name() << "\n";
	enemy->take_damage(strength, this);
	already_attack = false;
}

void fighter::action(world* w) {
	if (get_health() > 0) {
		for (int i = 0; i < current_heap->get_ants_count(); i++) {
			if (current_heap->get_ant(i)->get_colonium() != get_colonium() && (current_heap->get_ant(i)->get_health() > 0)) {
				attack(current_heap->get_ant(i));
				break;
			}
		}
	}
}

void fighter::print_info() {
	cout << "\tFighter ant" << '\n'
		<< "\tHealth: " << health << '\n'
		<< "\tAttack: " << attack << '\n'
		<< "\tProtect: " << protect << '\n' << '\n';
}

bool fighter::take_damage(int damage, ant* enemy) {
	bool is_dead = ant::take_damage(damage, enemy);
	if (!is_dead && !already_attack) {
		attack(enemy);
	}
	return is_dead;
}

void fighter::print_type() {
	cout << "fighter";
}