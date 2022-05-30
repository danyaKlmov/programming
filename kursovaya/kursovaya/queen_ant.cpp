#include"all.h"

void queen_ant::print_info() {
	print_type();
	cout << "\n\tИмя: " << name << '\n'
		<< "\tЗдоровье: " << health << '\n'
		<< "\tАтака: " << strength << '\n'
		<< "\tЗащита: " << protect << '\n'
		<< "\tВремя созревания личинок: " << time_laying_of_larvae << '\n'
		<< "\tЛичинок осталось: " << larvae_count << '\n';
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

bool queen_ant::is_relative(queen_ant* q) {
	return q->check_parentness(this);
}