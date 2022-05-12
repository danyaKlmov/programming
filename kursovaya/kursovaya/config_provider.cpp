#include"config_provider.h"
#include<fstream>

using namespace std;

vector<string> config_provider::get_queen_names() {
	ifstream input("configs/queen_names.cfg");
	vector<string> names;
	while (input) {
		string name;
		getline(input, name);
		names.push_back(name);
	}
	input.close();
	return names;
}

vector<string> config_provider::get_coloniums_names() {
	ifstream input("configs/colonium_names.cfg");
	vector<string> names;
	while (input) {
		string name;
		getline(input, name);
		names.push_back(name);
	}
	input.close();
	return names;
}

vector<int> config_provider::get_min_max_worker_healths() {
	ifstream input("configs/min_max_worker_healths.cfg");
	vector<int> healths;
	int max_health, min_health;
	input >> min_health;
	input >> max_health;
	healths.push_back(min_health);
	healths.push_back(max_health);
	input.close();
	return healths;
}
			
vector<int> config_provider::get_min_max_fighter_healths() {
	ifstream input("configs/min_max_fighter_healths.cfg");
	vector<int> healths;
	int max_health, min_health;
	input >> min_health;
	input >> max_health;
	healths.push_back(min_health);
	healths.push_back(max_health);
	input.close();
	return healths;
}
			 
vector<int> config_provider::get_min_max_queen_healths() {
	ifstream input("configs/min_max_queen_healths.cfg");
	vector<int> healths;
	int max_health, min_health;
	input >> min_health;
	input >> max_health;
	healths.push_back(min_health);
	healths.push_back(max_health);
	input.close();
	return healths;
}
			
vector<int> config_provider::get_min_max_fighter_attack() {
	ifstream input("configs/min_max_fighter_attack.cfg");
	vector<int> attacks;
	int max_attack, min_attack;
	input >> min_attack;
	input >> max_attack;
	attacks.push_back(min_attack);
	attacks.push_back(max_attack);
	input.close();
	return attacks;
}
			
vector<int> config_provider::get_min_max_queen_attack() {
	ifstream input("configs/min_max_queen_attack.cfg");
	vector<int> attacks;
	int max_attack, min_attack;
	input >> min_attack;
	input >> max_attack;
	attacks.push_back(min_attack);
	attacks.push_back(max_attack);
	input.close();
	return attacks;
}
			  
vector<int> config_provider::get_min_max_queen_larvae() {
	ifstream input("configs/min_max_queen_larvae.cfg");
	vector<int> larvaes;
	int max_larvae, min_larvae;
	input >> min_larvae;
	input >> max_larvae;
	larvaes.push_back(min_larvae);
	larvaes.push_back(max_larvae);
	input.close();
	return larvaes;
}
			 
vector<int> config_provider::get_min_max_queen_time_laying_of_larvae() {
	ifstream input("configs/min_max_queen_time_laying_of_larvae.cfg");
	vector<int> time_laying_of_larvaes;
	int max_time_laying_of_larvae, min_time_laying_of_larvae;
	input >> min_time_laying_of_larvae;
	input >> max_time_laying_of_larvae;
	time_laying_of_larvaes.push_back(min_time_laying_of_larvae);
	time_laying_of_larvaes.push_back(max_time_laying_of_larvae);
	input.close();
	return time_laying_of_larvaes;
}
			 
vector<int> config_provider::get_min_max_worker_protect() {
	ifstream input("configs/min_max_worker_protects.cfg");
	vector<int> protects;
	int max_protect, min_protect;
	input >> min_protect;
	input >> max_protect;
	protects.push_back(min_protect);
	protects.push_back(max_protect);
	input.close();
	return protects;
}
			 
vector<int> config_provider::get_min_max_fighter_protect() {
	ifstream input("configs/min_max_fighter_protects.cfg");
	vector<int> protects;
	int max_protect, min_protect;
	input >> min_protect;
	input >> max_protect;
	protects.push_back(min_protect);
	protects.push_back(max_protect);
	input.close();
	return protects;
}
			 
vector<int> config_provider::get_min_max_queen_protect() {
	ifstream input("configs/min_max_queen_protects.cfg");
	vector<int> protects;
	int max_protect, min_protect;
	input >> min_protect;
	input >> max_protect;
	protects.push_back(min_protect);
	protects.push_back(max_protect);
	input.close();
	return protects;
}

vector<int> config_provider::get_min_max_heap() {
	ifstream input("configs/min_max_heaps.cfg");
	vector<int> heaps;
	int max_heap, min_heap;
	input >> min_heap;
	input >> max_heap;
	heaps.push_back(min_heap);
	heaps.push_back(max_heap);
	input.close();
	return heaps;
}

vector<int> config_provider::get_min_max_worker_ant_count() {
	ifstream input("configs/min_max_worker_ant_counts.cfg");
	vector<int> worker_ant_counts;
	int max_worker_ant_count, min_worker_ant_count;
	input >> min_worker_ant_count;
	input >> max_worker_ant_count;
	worker_ant_counts.push_back(min_worker_ant_count);
	worker_ant_counts.push_back(max_worker_ant_count);
	input.close();
	return worker_ant_counts;
}

vector<int> config_provider::get_min_max_fighter_ant_count() {
	ifstream input("configs/min_max_fighter_ant_counts.cfg");
	vector<int> fighter_ant_counts;
	int max_fighter_ant_count, min_fighter_ant_count;
	input >> min_fighter_ant_count;
	input >> max_fighter_ant_count;
	fighter_ant_counts.push_back(min_fighter_ant_count);
	fighter_ant_counts.push_back(max_fighter_ant_count);
	input.close();
	return fighter_ant_counts;
}
			 
