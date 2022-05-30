#include"all.h"

void cricket::print_info() {
	cout << "\t�������" << '\n'
		<< "\t��������: " << health << '\n'
		<< "\t������: " << protect << '\n'
		<< "\t�� ����� ����� �������; ����� ���� �������� �������; �������� ���� � ������ ��������� � ����\n\n";
}

void cricket::resourcing(heap* h) {
	cout << "������� ������� �����, ����� ������� �������\n";
}

void cricket::end_turn(world* w) {
	for (int i = 0; i < get_colonium()->get_ants_count(); i++) {
		if (get_colonium()->get_ant(i)->get_health() > 1) {
			get_colonium()->get_ant(i)->set_health(get_colonium()->get_ant(i)->get_health() / 2);
		}
	}
}

void cricket::turn(world* w) {
	for (int i = 0; i < get_colonium()->get_ants_count(); i++) {
		get_colonium()->get_ant(i)->set_health(get_colonium()->get_ant(i)->get_health() * 2);
	}
}

void cricket::print_type() {
	cout << "�������";
}