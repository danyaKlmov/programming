#include"all.h"

void exp_orange_work_ant::print_info() {
	cout << "\tРыжий опытный рабочий" << '\n'
		<< "\tЗдоровье: " << health << '\n'
		<< "\tЗащита: " << protect << '\n'
		<< "\tМожет брать 2 ресурса: листик или камушек за раз\n\n";
}

void  exp_orange_work_ant::resourcing(heap* h) {
	if (h->get_resource_count(resource_type::rock) >= 2) {
		h->take_resource(resource_type::rock);
		h->take_resource(resource_type::rock);
		rock_count = 2;
		cout << "Рыжий опытный рабочий из колонии " << get_colonium()->get_name() << " берет 2 камушка\n";
		return;
	}
	if (h->get_resource_count(resource_type::stick) >= 2) {
		h->take_resource(resource_type::stick);
		h->take_resource(resource_type::stick);
		stick_count = 2;
		cout << "Рыжий опытный рабочий из колонии " << get_colonium()->get_name() << " берет 2 веточки\n";
		return;
	}
	if (h->get_resource_count(resource_type::rock) > 0) {
		h->take_resource(resource_type::rock);
		rock_count = 1;
		cout << "Рыжий опытный рабочий из колонии " << get_colonium()->get_name() << " берет 1 камушек\n";
		return;
	}
	if (h->get_resource_count(resource_type::leaf) > 0) {
		h->take_resource(resource_type::leaf);
		stick_count = 1;
		cout << "Рыжий опытный рабочий из колонии " << get_colonium()->get_name() << " берет 1 веточку\n";
		return;
	}
}
void  exp_orange_work_ant::end_turn(world* w) {
	work_ant::end_turn(w);
	get_colonium()->add_resource(resource_type::stick, stick_count);
	get_colonium()->add_resource(resource_type::rock, rock_count);
	cout << "Рыжий опытный рабочий из колонии " << get_colonium()->get_name() << " доставил " << stick_count << " веточку(чки) и " << rock_count << " камушек(ка)\n";
	stick_count = 0;
	rock_count = 0;
}

void exp_orange_work_ant::print_type() {
	cout << "Рыжий опытный рабочий";
}