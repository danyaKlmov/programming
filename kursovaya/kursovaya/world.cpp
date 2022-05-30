#include"all.h"
#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

 world::world() {
	 lizard_day = -1;
	 lizard_remain_time = 4;
	 create_heaps();
	 coloniums.push_back(create_red_colonium());
	 coloniums.push_back(create_orange_colonium());
}
 world::~world() {
	 for (int i = 0; i < heaps.size(); i++) {
		 delete heaps[i];
	 }
	 for (int i = 0; i < coloniums.size(); i++) {
		 delete coloniums[i];
	 }
 }

 void world::start_game(ofstream& output_file) {
	 //cout.rdbuf(output_file.rdbuf());

	 int time = 14;
	 lizard_day = rand()% (time - 4);
	 for (int i = 0; i < time; i++) {
		 observe_info(time - i);
		 print_turn_preamble(i, time);
		 string trash;
		 if (i >= lizard_day) {
			 process_lizard();
			 cout << "Нажмите enter\n";
			 getline(cin, trash);
		 }
		 for (int a = 0; a < coloniums.size(); a++) {
			 cout << "\n********Ход " << coloniums[a]->get_name() << "********\n\n";
			 cout << "Нажмите enter\n";
			 getline(cin, trash);
			 coloniums[a]->turn(this);
		 }
		 for (int a = 0; a < coloniums.size(); a++) {
			 cout << "\n********Действие " << coloniums[a]->get_name() << "********\n\n";
			 cout << "Нажмите enter\n";
			 getline(cin, trash);
			 coloniums[a]->action(this);
		 }
		 for (int a = 0; a < coloniums.size(); a++) {
			 cout << "\n********Завершение хода " << coloniums[a]->get_name() << "*******\n\n";
			 cout << "Нажмите enter\n";
			 getline(cin, trash);
			 coloniums[a]->end_turn(this);
		 }
		 for (int a = 0; a < heaps.size(); a++) {
			 heaps[a]->clear_ants();
		 }
	 }
	 int max_resource_count = 0;
	 int win_colonium_index = -1;
	 for (int a = 0; a < coloniums.size(); a++) {
		 int resource_count = coloniums[a]->get_resource_count(resource_type::stick);
		 resource_count += coloniums[a]->get_resource_count(resource_type::leaf);
		 resource_count += coloniums[a]->get_resource_count(resource_type::drop);
		 resource_count += coloniums[a]->get_resource_count(resource_type::rock);
		 if (resource_count >= max_resource_count) {
			 max_resource_count = resource_count;
			 win_colonium_index = a;
		 }
		 cout << "Колония " << coloniums[a]->get_name() << " собрала " << resource_count << " единиц ресурсов\n";
	 }
	 for (int a = 0; a < coloniums.size(); a++) {
		 int resource_count = coloniums[a]->get_resource_count(resource_type::stick);
		 resource_count += coloniums[a]->get_resource_count(resource_type::leaf);
		 resource_count += coloniums[a]->get_resource_count(resource_type::drop);
		 resource_count += coloniums[a]->get_resource_count(resource_type::rock);
		 if (resource_count == max_resource_count) {
			 cout << "Колония " << coloniums[a]->get_name() << " выжила!\n";
		 }
		 else {
			 cout << "Колония " << coloniums[a]->get_name() << " погибла!\n";
		 }
	 }
 }

void world::add_colonium(colonium* c) {
	coloniums.push_back(c);
}

colonium* world::create_red_colonium() {
	red_queen_mom* queen = new red_queen_mom;
	colonium* col = new colonium("красные");
	col->set_queen(queen);
	queen->set_colonium(col);
	for (int i = 0; i < 5; i++) {
		col->add_ant(new exp_red_work_ant);
		col->add_ant(new simple_talant_work_ant);
	}
	for (int i = 0; i < 4; i++) {
		col->add_ant(new older_work_ant);
	}
	for (int i = 0; i < 3; i++) {
		col->add_ant(new simple_fighter);
		col->add_ant(new legendary_fighter);
		col->add_ant(new simple_hunter_fighter);
	}
	col->add_ant(new scarab);
	return col;
}
colonium* world::create_orange_colonium() {
	orange_queen_mom* queen = new orange_queen_mom;
	colonium* col = new colonium("рыжие");
	col->set_queen(queen);
	queen->set_colonium(col);
	for (int i = 0; i < 5; i++) {
		col->add_ant(new exp_orange_work_ant);
		col->add_ant(new simple_stocky_work_ant);
		col->add_ant(new legendary_work_ant);
	}
	for (int i = 0; i < 3; i++) {
		col->add_ant(new legendary_fighter);
	}
	col->add_ant(new older_fighter);
	col->add_ant(new older_accurate_fighter);
	col->add_ant(new cricket);
	return col;
}

void world::create_heaps() {
	heaps.push_back(new heap("куча 1", 37, 33, 24, 49));
	heaps.push_back(new heap("куча 2", 14, 19, 0, 0));
	heaps.push_back(new heap("куча 3", 37, 28, 0, 16));
	heaps.push_back(new heap("куча 4", 48, 0, 0, 0));
	heaps.push_back(new heap("куча 5", 28, 22, 10, 0));
}

void world::print_turn_preamble(int turn_number, int time) {
	cout << "Ход " << turn_number+1 << "\n";
	cout << "В мире " << coloniums.size() << " колоний" << "\n";
	cout << "До засухи " << time - turn_number << "\n";
	if (lizard_day <= turn_number && lizard_day > turn_number - 4) {
		cout << "НАД МИРОМ НАВИСЛА УГРОЗА\n";
	}
}

void world::observe_info(int turns_to_drought) {
	string command;
	while (command != "0") {
		cout << "1. Вывести информацию о мире\n"
			<< "2. Вывести информацию о колонии\n"
			<< "3. Вывести информацию о куче\n"
			<< "4. Очистить экран\n"
			<< "5. Досрочно завершить симмуляцию\n"
			<< "0. Запустить следующий ход\n";
		getline(cin, command);
		if (command == "1") {
			print_world_info(turns_to_drought);
		}
		else if (command == "2") {
			print_colonium_info();
		}
		else if (command == "3") {
			print_heap_info();
		}
		else if (command == "4") {
			system("cls");
		}
		else if (command == "5") {
			exit(0);
		}
		else if (command != "0") {
			cout << "Ошибка(неверно введена команда)\n";
		}
	}
}

void world::print_world_info(int turns_to_drought) {
	cout << "Число колоний " << coloniums.size() << "\n";
	cout << "Число куч " << heaps.size() << "\n";
	cout << "Ходов до засухи " << turns_to_drought << "\n";
}


void world::print_colonium_info() {
	for (int i = 0; i < coloniums.size(); i++) {
		cout << i + 1 << ". " << coloniums[i]->get_name() << "\n";
	}
	string command;
	cout << "О какой колонии вывести информацию(введите номер)\n";
	getline(cin, command);
	for (int i = 0; i < coloniums.size(); i++) {
		if (to_string(i + 1) == command) {
			coloniums[i]->print_colonuim_info();
			return;
		}
	}
	cout << "Ошибка(неверный номер колонии)\n";
}


void world::print_heap_info() {
	for (int i = 0; i < heaps.size(); i++) {
		cout << i + 1 << ". " << heaps[i]->get_name() << "\n";
	}
	string command;
	cout << "О какой куче вывести информацию(введите номер)\n";
	getline(cin, command);
	for (int i = 0; i < heaps.size(); i++) {
		if (to_string(i + 1) == command) {
			heaps[i]->print_heap_info();
			return;
		}
	}
	cout << "Ошибка(неверный номер кучи)\n";
}

void world::process_lizard() {
	if (lizard_remain_time > 0) {
		lizard_remain_time--;
		for (int i = 0; i < coloniums.size(); i++) {
			if (coloniums[i]->get_ants_count() > 0) {
				int eated_ant_index = rand() % coloniums[i]->get_ants_count();
				cout << "Ящерица съедает ";
				coloniums[i]->get_ant(eated_ant_index)->print_type();
				cout << " из колонии " << coloniums[i]->get_name() << '\n';
				coloniums[i]->remove_ant(coloniums[i]->get_ant(eated_ant_index));
			}
		}
	}
}




