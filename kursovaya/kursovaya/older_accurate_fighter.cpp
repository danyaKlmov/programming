#include"all.h"

void older_accurate_fighter::print_info() {
	cout << "\t������� ������ ����" << '\n'
		<< "\t��������: " << health << '\n'
		<< "\t�����: " << strength << '\n'
		<< "\t������: " << protect << '\n'
		<< "\t����� ��������� 1 ���� �� ��� � ������� 1 ����; ���������� ������ � ����� �������� ���� ���������� ���������\n\n";
}

void older_accurate_fighter::attack(ant* enemy) {
	already_attack = true;
	cout << "���� �� ������� " << get_colonium()->get_name() << " ������� ";
	enemy->print_type();
	cout << " �� ������� " << enemy->get_colonium()->get_name() << "\n";
	enemy->take_damage(strength + enemy->get_protect(), this);
	already_attack = false;
}

void older_accurate_fighter::action(world* w) {
	if (get_health() > 0) {
		for (int i = 0; i < current_heap->get_ants_count(); i++) {
			if (current_heap->get_ant(i)->can_be_attacked(this)) {
				attack(current_heap->get_ant(i));
				break;
			}
		}
	}
}

void older_accurate_fighter::print_type() {
	cout << "������� ������ ����";
}