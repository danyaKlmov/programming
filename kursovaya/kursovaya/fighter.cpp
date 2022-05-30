#include"all.h"

void fighter::attack(ant* enemy) {
	already_attack = true;
	cout << "���� �� ������� " << get_colonium()->get_name() << " ������� "; 
	enemy->print_type();
	cout << " �� ������� " << enemy->get_colonium()->get_name() << "\n";
	enemy->take_damage(strength, this);
	already_attack = false;
}

void fighter::action(world* w) {
	if (get_health() > 0) {
		for (int i = 0; i < current_heap->get_ants_count(); i++) {
			if (current_heap->get_ant(i)->can_be_attacked(this) && !current_heap->get_ant(i)->is_invulnerable()) {
				attack(current_heap->get_ant(i));
				break;
			}
		}
	}
}

void fighter::print_info() {
	cout << "\t����" << '\n'
		<< "\t��������: " << health << '\n'
		<< "\t�����: " << strength << '\n'
		<< "\t������: " << protect << '\n' << '\n';
}

bool fighter::take_damage(int damage, ant* enemy) {
	bool is_dead = ant::take_damage(damage, enemy);
	if (!is_dead && !already_attack) {
		attack(enemy);
	}
	return is_dead;
}

void fighter::print_type() {
	cout << "����";
}