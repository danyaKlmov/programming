#include"all.h"

void work_ant::print_info() {
	cout << "\tрабочий" << '\n'
		<< "\tЗдоровье: " << health << '\n'
		<< "\tЗащита: " << protect << '\n' << '\n';
}

void work_ant::action(world* w) {
	if (get_health() > 0) {
		resourcing(current_heap);
	}
}

void work_ant:: print_type() {
	cout << "рабочий";
}