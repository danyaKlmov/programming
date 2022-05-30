#include"all.h"

void simple_hunter_fighter::print_info() {
	cout << "\t������� ������� ����" << '\n'
		<< "\t��������: " << health << '\n'
		<< "\t�����: " << strength << '\n'
		<< "\t������: " << protect << '\n'
		<< "\t����� ��������� 1 ���� �� ��� � ������� 1 ����; ������� ������ ����������, ����� ������� �� ����\n\n";
}

void simple_hunter_fighter::action(world* w) {
	if (get_health() > 0) {
		for (int i = 0; i < current_heap->get_ants_count(); i++) {
			if (current_heap->get_ant(i)->can_be_attacked(this) && current_heap->get_ant(i)->is_invulnerable()) {
				attack(current_heap->get_ant(i));
				break;
			}
		}
	}
}

void simple_hunter_fighter::print_type() {
	cout << "������� ������� ����";
}