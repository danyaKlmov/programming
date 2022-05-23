#include"queen_mom.h"

void queen_mom::print_info() {
	cout << "\tQueen mom\n";
	queen_ant::print_info();
}

void queen_mom::turn(world* w) {
	time_of_last_laying += 1;
}

void queen_mom::laying_of_larvae() {
	if (larvae_count == 0) {
		return;
	}
	int type = rand() % 3;
	if (type == 0) {
		larvae = get_colonium()->create_queen_daughter();
	}
	if (type == 1) {
		larvae = get_colonium()->create_work_ant();
	}
	if (type == 2) {
		larvae = get_colonium()->create_fighter();
	}
	larvae_count--;
}

void queen_mom:: print_type() {
	cout << "queen_mom";
}
