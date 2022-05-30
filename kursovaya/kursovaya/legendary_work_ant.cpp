#include"all.h"

void legendary_work_ant::print_info() {
	cout << "\t����������� �������" << '\n'
		<< "\t��������: " << health << '\n'
		<< "\t������: " << protect << '\n'
		<< "\t����� ����� 3 �������: ������� � ������� � ������� �� ���\n\n";
}

void  legendary_work_ant::resourcing(heap* h) {
	if (h->get_resource_count(resource_type::rock) > 0) {
		h->take_resource(resource_type::rock);
		rock_count = 1;
		cout << "����������� ������� �� ������� " << get_colonium()->get_name() << " ����� 1 �������\n";
	}
	if (h->get_resource_count(resource_type::stick) > 0) {
		h->take_resource(resource_type::stick);
		stick_count = 1;
		cout << "����������� ������� �� ������� " << get_colonium()->get_name() << " ����� 1 �������\n";
	}
	if (h->get_resource_count(resource_type::drop) > 0) {
		h->take_resource(resource_type::drop);
		drop_count = 1;
		cout << "����������� ������� �� ������� " << get_colonium()->get_name() << " ����� 1 �������\n";
	}
}
void  legendary_work_ant::end_turn(world* w) {
	work_ant::end_turn(w);
	get_colonium()->add_resource(resource_type::leaf, stick_count);
	get_colonium()->add_resource(resource_type::rock, rock_count);
	get_colonium()->add_resource(resource_type::leaf, drop_count);
	cout << "����������� ������� �� ������� " << get_colonium()->get_name() << " �������� " << stick_count << " ������(��) � " << rock_count << " �������(���) � " << drop_count << " �������(���)\n";
	stick_count = 0;
	rock_count = 0;
	drop_count = 0;
}

void legendary_work_ant::print_type() {
	cout << "����������� �������";
}