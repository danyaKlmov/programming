#include"all.h"

void queen_mom::turn(world* w) {
	time_of_last_laying += 1;
}

void queen_mom:: print_type() {
	cout << "Королева мать";
}

void queen_mom::print_info() {
	queen_ant::print_info();
	cout << "\tМожет создать еще " << daughter_count << " дочерей\n\n";
}

bool queen_mom::check_parentness(queen_ant*) {
	return false;
}