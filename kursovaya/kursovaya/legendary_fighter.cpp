#include"all.h"

void legendary_fighter::print_info() {
	cout << "\tЛегендарный боец" << '\n'
		<< "\tЗдоровье: " << health << '\n'
		<< "\tАтака: " << strength << '\n'
		<< "\tЗащита: " << protect << '\n'
		<< "\tМожет атаковать 3 цели за раз и наносит 1 укус\n\n";
}

void legendary_fighter::action(world* w) {
	if (get_health() > 0) {
		int attack_count = 0;
		for (int i = 0; i < current_heap->get_ants_count() && attack_count < 3; i++) {
			if (current_heap->get_ant(i)->can_be_attacked(this) && !current_heap->get_ant(i)->is_invulnerable()) {
				attack(current_heap->get_ant(i));
				attack_count++;
			}
		}
	}
}

void legendary_fighter::print_type() {
	cout << "Легендарный боец";
}