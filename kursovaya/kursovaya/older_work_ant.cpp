#include"all.h"

void older_work_ant::print_info() {
	cout << "\t������� �������" << '\n'
		<< "\t��������: " << health << '\n'
		<< "\t������: " << protect << '\n'
		<< "\t����� ��������� 1 ���� �� ��� � ������� 1 ����\n\n";
}

void older_work_ant::resourcing(heap* h) {
	if (h->get_resource_count(resource_type::stick) > 0) {
		h->take_resource(resource_type::stick);
		has_stick = true;
		cout << "������� ������� �� ������� " << get_colonium()->get_name() << " ����� �������\n";
		return;
	} 
}

void older_work_ant::end_turn(world* w) {
	work_ant::end_turn(w);
	if (has_stick) {
		get_colonium()->add_resource(resource_type::stick, 1);
		has_stick = false;
		cout << "������� ������� �� ������� " << get_colonium()->get_name() << " �������� �������\n";
	}
}

void older_work_ant::print_type() {
	cout << "������� �������";
}