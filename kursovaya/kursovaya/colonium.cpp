#include"colonium.h"
#include"config_provider.h"
#include<cstdlib>


colonium::colonium(int fighter_count, int work_ant_count) {
	this->fighter_count = fighter_count;
	this->work_ant_count = work_ant_count;
	queen_ant = create_queen_ant();
	ants.push_back(queen_ant);
	for (int i = 0; i < work_ant_count; i++) {
		ant* work_ant = create_work_ant();
		ants.push_back(work_ant);
	}
	for (int i = 0; i < fighter_count; i++) {
		ant* fighter = create_fighter();
		ants.push_back(fighter);
	}
}

colonium::~colonium() {
	for (int i = 0; i < ants.size(); i++) {
		delete ants[i];
	}
}
ant* colonium::create_fighter() {
	auto healths = config_provider::get_min_max_fighter_ant_healths();
	auto attacks = config_provider::get_min_max_fighter_ant_attacks();
	auto protects = config_provider::get_min_max_fighter_ant_protect();

	int health = healths[0] + (rand() % (healths[1] - healths[0]));
	int attack = attacks[0] + (rand() % (attacks[1] - attacks[0]));
	int protect = protects[0] + (rand() % (protects[1] - protects[0]));
	return new fighter_ant(attack, health, protect);
}
ant* colonium::create_work_ant() {
	auto healths = config_provider::get_min_max_work_ant_healths();
	auto protects = config_provider::get_min_max_work_ant_protect();

	int health = healths[0] + (rand() % (healths[1] - healths[0]));
	int protect = protects[0] + (rand() % (protects[1] - protects[0]));
	return new work_ant(health, protect);
}
ant* colonium::create_queen_ant() {
	auto names = config_provider::get_queen_names();
	auto healths = config_provider::get_min_max_queen_healths();
	auto attacks = config_provider::get_min_max_queen_attacks();
	auto larvaes = config_provider::get_min_max_queen_larvae();
	auto time_laying_of_larvaes = data_provider::get_min_max_queen_time_laying_of_larvae();
	auto protects = config_provider::get_min_max_queen_protect();

	string name = names[rand() % names.size()];

	int health = healths[0] + (rand() % (healths[1] - healths[0]));
	int attack = attacks[0] + (rand() % (attacks[1] - attacks[0]));
	int larvae = larvaes[0] + (rand() % (larvaes[1] - larvaes[0]));
	int time_laying_of_larvae = time_laying_of_larvaes[0] + (rand() % (time_laying_of_larvaes[1] - time_laying_of_larvaes[0]));
	int protect = protects[0] + (rand() % (protects[1] - protects[0]));
	return new queen_ant_mom(name, health, attack, protect, time_laying_of_larvae, larvae);
};

void colonium::turn(world* w) {
	for (int c = 0; c < ants.size(); c++) {
		ants[c].turn(w);
	}
}

void colonium::action(world* w) {
	for (int d = 0; d < ants,size(); d++) {
		ants[d].action(w);
	}
}

void colonium::end_turn(world* w) {
	for (int i = 0; i < ants.size(); i++) {
		ants[i].end_turn();
	}
}