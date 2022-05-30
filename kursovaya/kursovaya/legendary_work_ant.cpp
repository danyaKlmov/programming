#include"all.h"

void legendary_work_ant::print_info() {
	cout << "\tЛегендарный рабочий" << '\n'
		<< "\tЗдоровье: " << health << '\n'
		<< "\tЗащита: " << protect << '\n'
		<< "\tМожет брать 3 ресурса: веточек и росинка и камушек за раз\n\n";
}

void  legendary_work_ant::resourcing(heap* h) {
	if (h->get_resource_count(resource_type::rock) > 0) {
		h->take_resource(resource_type::rock);
		rock_count = 1;
		cout << "Легендарный рабочий из колонии " << get_colonium()->get_name() << " берет 1 камушек\n";
	}
	if (h->get_resource_count(resource_type::stick) > 0) {
		h->take_resource(resource_type::stick);
		stick_count = 1;
		cout << "Легендарный рабочий из колонии " << get_colonium()->get_name() << " берет 1 веточку\n";
	}
	if (h->get_resource_count(resource_type::drop) > 0) {
		h->take_resource(resource_type::drop);
		drop_count = 1;
		cout << "Легендарный рабочий из колонии " << get_colonium()->get_name() << " берет 1 росинку\n";
	}
}
void  legendary_work_ant::end_turn(world* w) {
	work_ant::end_turn(w);
	get_colonium()->add_resource(resource_type::leaf, stick_count);
	get_colonium()->add_resource(resource_type::rock, rock_count);
	get_colonium()->add_resource(resource_type::leaf, drop_count);
	cout << "Легендарный рабочий из колонии " << get_colonium()->get_name() << " доставил " << stick_count << " листик(ов) и " << rock_count << " камушек(ков) и " << drop_count << " росинку(нок)\n";
	stick_count = 0;
	rock_count = 0;
	drop_count = 0;
}

void legendary_work_ant::print_type() {
	cout << "Легендарный рабочий";
}