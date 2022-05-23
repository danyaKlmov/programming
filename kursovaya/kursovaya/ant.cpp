#include"ant.h"
#include"colonium.h"
#include"world.h"

void ant::turn(world* w) {
	int hc = w->get_heap_count();
	int heap_number = rand() % hc;
	heap* h = w->get_heap(heap_number);
	h->add_ant(this);
	current_heap = h;
}

void  ant::end_turn(world* w) {
	current_heap = nullptr;
}

bool ant::take_damage(int damage, ant* enemy) {
	if (protect - damage > 0) {
		print_type();
		cout << " from colonium " << get_colonium()->get_name() << " getting " << protect - damage << " of damage\n";
		health = health - (protect - damage);
	}
	else {
		print_type();
		cout << " from colonium " << get_colonium()->get_name() << " don't get damage\n";
	}
	return health <= 0;
}