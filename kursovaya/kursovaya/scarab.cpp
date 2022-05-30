#include"all.h"

void scarab::print_info() {
	cout << "\tСкарабей" << '\n'
		<< "\tЗдоровье: " << health << '\n'
		<< "\tЗащита: " << protect << '\n'
		<< "\tМожет брать ресурсы (1 ресурс: веточка); не может быть атакован войнами; игнорирует каждый 2й поход.\n\n";
}

void scarab::resourcing(heap* h) {
	if (h->get_resource_count(resource_type::stick) > 0) {
		h->take_resource(resource_type::stick);
		stick_count = 1;
		cout << "Скарабей из колонии " << get_colonium()->get_name() << " берет 1 веточку\n";
	}
}

void  scarab::end_turn(world* w) {
	if (turn_count % 2 == 0)
		return;
	work_ant::end_turn(w);
	get_colonium()->add_resource(resource_type::leaf, stick_count);
	cout << "Скарабей из колонии " << get_colonium()->get_name() << " доставил " << stick_count << " веточку(ек)\n";
	stick_count = 0;
}
bool  scarab::is_invulnerable() {
	return true;
}

void  scarab::turn(world* w) {
	turn_count++;
	if (turn_count % 2 == 0) {
		cout << "Скарабей из колонии " << get_colonium()->get_name() << " отдыхает\n";
		return;
	}
	work_ant::turn(w);
}

void scarab::action(world* w) {
	if (turn_count % 2 == 0) {
		return;
	}
	else {
		work_ant::action(w);
	}
}

void scarab::print_type() {
	cout << "Скарабей";
}

