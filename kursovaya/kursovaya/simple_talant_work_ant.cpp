#include"all.h"

void simple_talant_work_ant::print_info() {
	cout << "\tОбычный талантливый рабочий" << '\n'
		<< "\tЗдоровье: " << health << '\n'
		<< "\tЗащита: " << protect << '\n'
		<< "\tМожет брать 1 ресурс: 'росинка' за раз; всегда находит нужный ресурс в куче, даже если его больше нет.\n\n";
}

void  simple_talant_work_ant::resourcing(heap* h) {
	if (h->get_resource_count(resource_type::drop) > 0) {
		h->take_resource(resource_type::drop);
	}
	drop_count = 1;
	cout << "Обычный талантливый рабочий из колонии " << get_colonium()->get_name() << " берет 1 росинку\n";
}
void  simple_talant_work_ant::end_turn(world* w) {
	work_ant::end_turn(w);
	get_colonium()->add_resource(resource_type::drop, drop_count);
	cout << "Обычный талантливый рабочий из колонии " << get_colonium()->get_name() << " доставил " << drop_count << " росинку\n";
	drop_count = 0;
}

void simple_talant_work_ant::print_type() {
	cout << "Обычный талантливый рабочий";
}