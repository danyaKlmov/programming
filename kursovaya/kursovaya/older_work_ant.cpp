#include"all.h"

void older_work_ant::print_info() {
	cout << "\tСтарший рабочий" << '\n'
		<< "\tЗдоровье: " << health << '\n'
		<< "\tЗащита: " << protect << '\n'
		<< "\tМожет атаковать 1 цель за раз и наносит 1 укус\n\n";
}

void older_work_ant::resourcing(heap* h) {
	if (h->get_resource_count(resource_type::stick) > 0) {
		h->take_resource(resource_type::stick);
		has_stick = true;
		cout << "Старший рабочий из колонии " << get_colonium()->get_name() << " берет веточку\n";
		return;
	} 
}

void older_work_ant::end_turn(world* w) {
	work_ant::end_turn(w);
	if (has_stick) {
		get_colonium()->add_resource(resource_type::stick, 1);
		has_stick = false;
		cout << "Старший рабочий из колонии " << get_colonium()->get_name() << " доставил веточку\n";
	}
}

void older_work_ant::print_type() {
	cout << "Старший рабочий";
}