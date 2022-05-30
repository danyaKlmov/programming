#include"all.h"

void exp_red_work_ant::print_info() {
	cout << "\tКрасный опытный рабочий" << '\n'
		<< "\tЗдоровье: " << health << '\n'
		<< "\tЗащита: " << protect << '\n'
		<< "\tМожет брать 2 ресурса: листик или камушек за раз\n\n";
}

void  exp_red_work_ant::resourcing(heap* h) {
	if (h->get_resource_count(resource_type::rock) >= 2) {
		h->take_resource(resource_type::rock);
		h->take_resource(resource_type::rock);
		rock_count = 2;
		cout << "Красный опытный рабочий из колонии " << get_colonium()->get_name() << " берет 2 камушка\n";
		return;
	}
	if (h->get_resource_count(resource_type::leaf) >= 2) {
		h->take_resource(resource_type::leaf);
		h->take_resource(resource_type::leaf);
		leaf_count = 2;
		cout << "Красный опытный рабочий из колонии " << get_colonium()->get_name() << " берет 2 листика\n";
		return;
	} 
	if (h->get_resource_count(resource_type::rock) > 0) {
		h->take_resource(resource_type::rock);
		rock_count = 1;
		cout << "Красный опытный рабочий из колонии " << get_colonium()->get_name() << " берет 1 камушек\n";
		return;
	}
	if (h->get_resource_count(resource_type::leaf) > 0) {
		h->take_resource(resource_type::leaf);
		leaf_count = 1;
		cout << "Красный опытный рабочий из колонии " << get_colonium()->get_name() << " берет 1 листик\n";
		return;
	}
}
void  exp_red_work_ant::end_turn(world* w) {
	work_ant::end_turn(w);
	get_colonium()->add_resource(resource_type::leaf, leaf_count);
	get_colonium()->add_resource(resource_type::rock, rock_count);
	cout << "Красный опытный рабочий из колонии " << get_colonium()->get_name() << " доставил " << leaf_count << " листик(ов) и " << rock_count << " камушек(ка)\n";
	leaf_count = 0;
	rock_count = 0;
}

void exp_red_work_ant::print_type() {
	cout << "Красный опытный рабочий";
}