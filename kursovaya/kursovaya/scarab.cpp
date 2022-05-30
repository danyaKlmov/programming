#include"all.h"

void scarab::print_info() {
	cout << "\t��������" << '\n'
		<< "\t��������: " << health << '\n'
		<< "\t������: " << protect << '\n'
		<< "\t����� ����� ������� (1 ������: �������); �� ����� ���� �������� �������; ���������� ������ 2� �����.\n\n";
}

void scarab::resourcing(heap* h) {
	if (h->get_resource_count(resource_type::stick) > 0) {
		h->take_resource(resource_type::stick);
		stick_count = 1;
		cout << "�������� �� ������� " << get_colonium()->get_name() << " ����� 1 �������\n";
	}
}

void  scarab::end_turn(world* w) {
	if (turn_count % 2 == 0)
		return;
	work_ant::end_turn(w);
	get_colonium()->add_resource(resource_type::leaf, stick_count);
	cout << "�������� �� ������� " << get_colonium()->get_name() << " �������� " << stick_count << " �������(��)\n";
	stick_count = 0;
}
bool  scarab::is_invulnerable() {
	return true;
}

void  scarab::turn(world* w) {
	turn_count++;
	if (turn_count % 2 == 0) {
		cout << "�������� �� ������� " << get_colonium()->get_name() << " ��������\n";
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
	cout << "��������";
}

