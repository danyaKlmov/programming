#include"queen_ant.h"
#include"colonium.h"

void queen_ant::print_info() {
	cout << "\tName: " << name << '\n'
		<< "\tHealth: " << health << '\n'
		<< "\tAttack: " << attack << '\n'
		<< "\tProtect: " << protect << '\n'
		<< "\tTime laying of larvae: " << time_laying_of_larvae << '\n'
		<< "\tLarvae: " << larvae << '\n' << '\n';
}

void queen_ant::action(world* w) {
	if (larvae == nullptr) {
		cout << "Queen " << name << " from colonium " << get_colonium()->get_name() << " laying of larvae\n";
		laying_of_larvae();
	}
}

void queen_ant::end_turn(world* w) {
	if (time_of_last_laying == time_laying_of_larvae) {
		get_colonium()->add_ant(larvae);
		larvae = nullptr;
	}
}