#include"colonium.h"
#include"world.h"
#include"config_provider.h"

 world::world(int heap_count, int colonium_count) {
	this->heap_count = heap_count;
	this->colonium_count = colonium_count;
	for (int i = 0; i < heap_count; i++) {
		heaps.push_back(create_heap());
	}
	for (int i = 0; i < colonium_count; i++) {
		coloniums.push_back(create_colonium());
	}
}
 world::~world() {
	 for (int i = 0; i < heap_count; i++) {
		 delete heaps[i];
	 }
	 for (int i = 0; i < colonium_count; i++) {
		 delete coloniums[i];
	 }
 }
 heap* world::create_heap() {
	 heap* h = new heap();
	 vector<int> min_max_heap = config_provider::get_min_max_heap();
	 int resources = min_max_heap[0] + (rand() % (min_max_heap[1] - min_max_heap[0]));
	 h->add_resource(resource_type::stick, resources);
	 resources = min_max_heap[0] + (rand() % (min_max_heap[1] - min_max_heap[0]));
	 h->add_resource(resource_type::rock, resources);
	 resources = min_max_heap[0] + (rand() % (min_max_heap[1] - min_max_heap[0]));
	 h->add_resource(resource_type::drop, resources);
	 resources = min_max_heap[0] + (rand() % (min_max_heap[1] - min_max_heap[0]));
	 h->add_resource(resource_type::leaf, resources);
	 return h;
 }
 colonium* world::create_colonium() { 
	 auto names = config_provider::get_coloniums_names();
	 string name = names[rand() % names.size()];
	 int fighter_ant_count, worker_ant_count;
	 vector<int> min_max_fighter_ant_count = config_provider::get_min_max_fighter_ant_count();
	 fighter_ant_count = min_max_fighter_ant_count[0] + (rand() % (min_max_fighter_ant_count[1] - min_max_fighter_ant_count[0]));
	 vector<int> min_max_worker_count = config_provider::get_min_max_worker_ant_count();
	 worker_ant_count = min_max_worker_count[0] + (rand() % (min_max_worker_count[1] - min_max_worker_count[0]));
	 colonium* c = new colonium (name, fighter_ant_count, worker_ant_count);
	 return c;
 }

 void world::start_game() {
	 auto times = config_provider::min_max_time_drought();

	 int time = times[0] + (rand() % (times[1] - times[0]));
	 for (int i = 0; i < time; i++) {
		 print_turn_preamble(i, time);
		 for (int a = 0; a < colonium_count; a++) {
			 coloniums[a]->print_colonuim_info();
			 coloniums[a]->turn(this);
		 }
		 for (int a = 0; a < colonium_count; a++) {
			 coloniums[a]->print_colonuim_info();
			 coloniums[a]->action(this);
		 }
		 for (int a = 0; a < colonium_count; a++) {
			 coloniums[a]->print_colonuim_info();
			 coloniums[a]->end_turn(this);
		 }
		 for (int a = 0; a < heap_count; a++) {
			 heaps[a]->clear_ants();
		 }
	 }
 }

void world::add_colonium(colonium* c) {
	coloniums.push_back(c);
	colonium_count += 1;
}

colonium* world::create_colonium(ant* queen) {
	auto names = config_provider::get_coloniums_names();
	string name = names[rand() % names.size()];
	int fighter_ant_count, worker_ant_count;
	vector<int> min_max_fighter_ant_count = config_provider::get_min_max_fighter_ant_count();
	fighter_ant_count = min_max_fighter_ant_count[0] + (rand() % (min_max_fighter_ant_count[1] - min_max_fighter_ant_count[0]));
	vector<int> min_max_worker_ant_count = config_provider::get_min_max_worker_ant_count();
	worker_ant_count = min_max_worker_ant_count[0] + (rand() % (min_max_worker_ant_count[1] - min_max_worker_ant_count[0]));
	colonium* c = new colonium(name, fighter_ant_count, worker_ant_count, queen);
	return c;
}

void world::print_turn_preamble(int turn_number, int time) {
	cout << "Turn " << turn_number << "\n";
	cout << "In the world " << colonium_count << " of coloniums" << "\n";
	cout << "Until drought " << time - turn_number << "\n";
}
