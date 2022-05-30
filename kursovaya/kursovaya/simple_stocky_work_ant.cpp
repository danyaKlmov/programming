#include"all.h"

void simple_stocky_work_ant::print_info() {
	cout << "\t������� ���������� �������" << '\n'
		<< "\t��������: " << health << '\n'
		<< "\t������: " << protect << '\n'
		<< "\t����� ����� 1 ������: '�������' �� ���; ����� �������� 1 ����� ����.\n\n";
}

void  simple_stocky_work_ant::resourcing(heap* h) {
	if (h->get_resource_count(resource_type::drop) > 0) {
		h->take_resource(resource_type::drop);
	}
	drop_count = 1;
	cout << "������� ���������� ������� �� ������� " << get_colonium()->get_name() << " ����� 1 �������\n";
}
void  simple_stocky_work_ant::end_turn(world* w) {
	work_ant::end_turn(w);
	get_colonium()->add_resource(resource_type::drop, drop_count);
	cout << "������� ���������� ������� �� ������� " << get_colonium()->get_name() << " �������� " << drop_count << " �������\n";
	drop_count = 0;
}

bool simple_stocky_work_ant::take_damage(int damage, ant* enemy) {
	if (!be_attacked) {
		be_attacked = true;
		return false;
	}
	else {
		return work_ant::take_damage(damage, enemy);
	}
} 

void simple_stocky_work_ant::print_type() {
	cout << "������� ���������� �������";
}