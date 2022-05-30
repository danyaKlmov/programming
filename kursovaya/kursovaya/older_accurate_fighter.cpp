#include"all.h"

void older_accurate_fighter::print_info() {
	cout << "\tСтарший точный боец" << '\n'
		<< "\tЗдоровье: " << health << '\n'
		<< "\tАтака: " << strength << '\n'
		<< "\tЗащита: " << protect << '\n'
		<< "\tМожет атаковать 1 цель за раз и наносит 1 укус; игнорирует защиту и может наносить урон неуязвимым насекомым\n\n";
}

void older_accurate_fighter::attack(ant* enemy) {
	already_attack = true;
	cout << "боец из колонии " << get_colonium()->get_name() << " атакует ";
	enemy->print_type();
	cout << " из колонии " << enemy->get_colonium()->get_name() << "\n";
	enemy->take_damage(strength + enemy->get_protect(), this);
	already_attack = false;
}

void older_accurate_fighter::action(world* w) {
	if (get_health() > 0) {
		for (int i = 0; i < current_heap->get_ants_count(); i++) {
			if (current_heap->get_ant(i)->can_be_attacked(this)) {
				attack(current_heap->get_ant(i));
				break;
			}
		}
	}
}

void older_accurate_fighter::print_type() {
	cout << "Старший точный боец";
}