#include"all.h"

void cricket::print_info() {
	cout << "\tСверчок" << '\n'
		<< "\tЗдоровье: " << health << '\n'
		<< "\tЗащита: " << protect << '\n'
		<< "\tНе может брать ресурсы; может быть атакован войнами; здоровье всех в походе увеличено в двое\n\n";
}

void cricket::resourcing(heap* h) {
	cout << "Сверчок слишком ленив, чтобы таскать ресурсы\n";
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
	cout << "Сверчок";
}