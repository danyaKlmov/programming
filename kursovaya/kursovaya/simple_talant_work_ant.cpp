#include"all.h"

void simple_talant_work_ant::print_info() {
	cout << "\t������� ����������� �������" << '\n'
		<< "\t��������: " << health << '\n'
		<< "\t������: " << protect << '\n'
		<< "\t����� ����� 1 ������: '�������' �� ���; ������ ������� ������ ������ � ����, ���� ���� ��� ������ ���.\n\n";
}

void  simple_talant_work_ant::resourcing(heap* h) {
	if (h->get_resource_count(resource_type::drop) > 0) {
		h->take_resource(resource_type::drop);
	}
	drop_count = 1;
	cout << "������� ����������� ������� �� ������� " << get_colonium()->get_name() << " ����� 1 �������\n";
}
void  simple_talant_work_ant::end_turn(world* w) {
	work_ant::end_turn(w);
	get_colonium()->add_resource(resource_type::drop, drop_count);
	cout << "������� ����������� ������� �� ������� " << get_colonium()->get_name() << " �������� " << drop_count << " �������\n";
	drop_count = 0;
}

void simple_talant_work_ant::print_type() {
	cout << "������� ����������� �������";
}