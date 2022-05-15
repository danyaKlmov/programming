#include"ant.h"

void virtual ant::turn(world* w) {
	int hc = w->get_heap_count();
	int heap_number = rand() % hc;
	heap* h = w->get_heap(heap_number);
	h->add_ant(this);
}

void  ant::end_turn(world* w) {
	if (health <= 0) {

	}
}