#include"all.h"

void ant::turn(world* w) {
	int hc = w->get_heap_count();
	int heap_number = rand() % hc;
	heap* h = w->get_heap(heap_number);
	h->add_ant(this);
	current_heap = h;
	print_type();
	cout << " из колонии " << get_colonium()->get_name() << " выбирает для путешествия " << h->get_name() << "\n";
}

void  ant::end_turn(world* w) {
	current_heap = nullptr;
}

bool ant::take_damage(int damage, ant* enemy) {
	if (damage - protect > 0) {
		print_type();
		cout << " из колонии " << get_colonium()->get_name() << " получает " << damage - protect << " урона\n";
		health = health - (damage - protect);
	} 
	else {
		print_type();
		cout << " из колонии " << get_colonium()->get_name() << " не получает урона\n";
	}
	if (health <= 0) {
		print_type();
		cout << " из колонии " << get_colonium()->get_name() << " умирает\n";
	}
	return health <= 0;
} 

bool ant::can_be_attacked(ant* attacker) {
	return health > 0 && get_colonium() != attacker->get_colonium() && !get_queen()->is_relative(attacker-> get_queen());
}