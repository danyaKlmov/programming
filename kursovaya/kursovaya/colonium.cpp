#include"all.h"

colonium::colonium(const string& name)
	:heap(name, 0, 0, 0, 0) {
	colonium_queen_ant = nullptr;
}

colonium::~colonium() {
	for (int i = 0; i < ants.size(); i++) {
		delete ants[i];
	}
}

void colonium::turn(world* w) {
	for (int c = 0; c < ants.size(); c++) {
		ants[c]->turn(w);
	}
}

void colonium::action(world* w) {
	for (int d = 0; d < ants.size(); d++) {
		ants[d]->action(w);
	}
}

void colonium::end_turn(world* w) {
	for (int i = 0; i < ants.size(); i++) {
		ants[i]->end_turn(w);
	}
	for (int i = 0; i < ants.size(); i++) {
		if (ants[i]->get_health() <= 0) {
			delete ants[i];
			ants.erase(ants.begin() + i);
			--i;
		}
	}
}

void  colonium::remove_ant(ant* a) {
	for (int e = 0; e < ants.size(); e++) {
		if (ants[e] == a) {
			ants.erase(ants.begin() + e);
			break;
		}
	}
	for (int e = 0; e < fighters.size(); e++) {
		if (fighters[e] == a) {
			fighters.erase(fighters.begin() + e);
			break;
		}
	}
	for (int e = 0; e < workers.size(); e++) {
		if (workers[e] == a) {
			workers.erase(workers.begin() + e);
			break;
		}
	}
	for (int e = 0; e < specials.size(); e++) {
		if (specials[e] == a) {
			specials.erase(specials.begin() + e);
			break;
		}
	}
}

void colonium::print_colonuim_info() {
	cout << "Колония: " << name << "\n";
	cout << "---------------------------------------------------------------------\n";
	cout << "Королева:\n";
	colonium_queen_ant->print_info();
	cout << "Рабочих: " << get_workers_count() << "\n";
	cout << "Бойцов: " << get_fighters_count() << "\n";
	cout << "Специальных: " << get_specials_count() << "\n";
	string command;
	while (command != "0") {
		cout << "1. Вывести информацию о рабочих\n";
		cout << "2. Вывести информацию о бойцах\n";
		cout << "3. Вывести информацию о специальных\n";
		cout << "0. Завершить просмотр\n";
		cout << "Введите номер пункта\n";
		getline(cin, command);
		if (command == "1") {
			for (int f = 0; f < workers.size(); f++) {
				workers[f]->print_info();
			}
		}
		else if (command == "2") {
			for (int f = 0; f < fighters.size(); f++) {
				fighters[f]->print_info();
			}
		}
		else if (command == "3") {
			for (int f = 0; f < specials.size(); f++) {
				specials[f]->print_info();
			}
		}
		else if (command != "0") {
			cout << "Ошибка(неверный номер пункта)\n";
		}
	}
	cout << "---------------------------------------------------------------------\n\n";
}

void colonium::add_ant(ant* a) {
	ants.push_back(a);
	a->set_colonium(this);
	a->set_queen(get_queen());
	switch (a->type()) {
	case ant_type::worker:
		workers.push_back(a);
		break;
	case ant_type::fighter:
		fighters.push_back(a);
		break;
	case ant_type::special:
		specials.push_back(a);
		break;
	}
}

void colonium::set_queen(queen_ant* queen) {
	colonium_queen_ant = queen;
}
