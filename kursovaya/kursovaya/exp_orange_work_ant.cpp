#include"all.h"

void exp_orange_work_ant::print_info() {
	cout << "\t????? ??????? ???????" << '\n'
		<< "\t????????: " << health << '\n'
		<< "\t??????: " << protect << '\n'
		<< "\t????? ????? 2 ???????: ?????? ??? ??????? ?? ???\n\n";
}

void  exp_orange_work_ant::resourcing(heap* h) {
	if (h->get_resource_count(resource_type::rock) >= 2) {
		h->take_resource(resource_type::rock);
		h->take_resource(resource_type::rock);
		rock_count = 2;
		cout << "????? ??????? ??????? ?? ??????? " << get_colonium()->get_name() << " ????? 2 ???????\n";
		return;
	}
	if (h->get_resource_count(resource_type::stick) >= 2) {
		h->take_resource(resource_type::stick);
		h->take_resource(resource_type::stick);
		stick_count = 2;
		cout << "????? ??????? ??????? ?? ??????? " << get_colonium()->get_name() << " ????? 2 ???????\n";
		return;
	}
	if (h->get_resource_count(resource_type::rock) > 0) {
		h->take_resource(resource_type::rock);
		rock_count = 1;
		cout << "????? ??????? ??????? ?? ??????? " << get_colonium()->get_name() << " ????? 1 ???????\n";
		return;
	}
	if (h->get_resource_count(resource_type::leaf) > 0) {
		h->take_resource(resource_type::leaf);
		stick_count = 1;
		cout << "????? ??????? ??????? ?? ??????? " << get_colonium()->get_name() << " ????? 1 ???????\n";
		return;
	}
}
void  exp_orange_work_ant::end_turn(world* w) {
	work_ant::end_turn(w);
	get_colonium()->add_resource(resource_type::stick, stick_count);
	get_colonium()->add_resource(resource_type::rock, rock_count);
	cout << "????? ??????? ??????? ?? ??????? " << get_colonium()->get_name() << " ???????? " << stick_count << " ???????(???) ? " << rock_count << " ???????(??)\n";
	stick_count = 0;
	rock_count = 0;
}

void exp_orange_work_ant::print_type() {
	cout << "????? ??????? ???????";
}