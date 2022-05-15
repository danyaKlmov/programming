#include"world.h"
#include"heap.h"
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
	 heap* heap = new heap();
	 vector<int> min_max_heap = config_provider::get_min_max_heap();
	 resources = min_max_heap[0] + (rand() % (min_max_heap[1] - min_max_heap[0]));
	 heap->add_resource(resource_type::stick, resources);
	 resources = min_max_heap[0] + (rand() % (min_max_heap[1] - min_max_heap[0]));
	 heap->add_resource(resource_type::rock, resources);
	 resources = min_max_heap[0] + (rand() % (min_max_heap[1] - min_max_heap[0]));
	 heap->add_resource(resource_type::drop, resources);
	 resources = min_max_heap[0] + (rand() % (min_max_heap[1] - min_max_heap[0]));
	 heap->add_resource(resource_type::leaf, resources);
	 return heap;
 }
 colonium* world::create_colonium() { 
	 int fighter_ant_count, worker_ant_count;
	 vector<int> min_max_colonium = config_provider::get_fighter_ant_count();
	 fighter_ant_count = get_fighter_ant_count[0] + (rand() % (get_fighter_ant_count[1] - get_fighter_ant_count[0]));
	 vector<int> min_max_colonium = config_provider::get_worker_ant_count();
	 worker_ant_count = get_worker_ant_count[0] + (rand() % (get_worker_ant_count[1] - get_worker_ant_count[0]));
	 colonium* colonium = new colonium(fighter_count, work_ant_count);
	 return colonium;
 }

 void world::start_game() {
	 auto times = config_provider::min_max_time_drought();

	 int time = times[0] + (rand() % (times[1] - times[0]));
	 for (int i = 0; i < time; i++) {
		 print_turn_preamble(i);
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

