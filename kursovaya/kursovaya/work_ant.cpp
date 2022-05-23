#include"work_ant.h"
#include"colonium.h"

void work_ant::print_info() {
	cout << "\tWorker ant" << '\n'
		<< "\tHealth: " << health << '\n'
		<< "\tProtect: " << protect << '\n' << '\n';
}

void work_ant::action(world* w) {
	if (get_health() > 0) {
		resourcing(current_heap);
	}
}

void work_ant::resourcing(heap* h) {
	if (h->get_resource_count(resource_type::stick) > 0) {
		 h->take_resource(resource_type::stick);
		 get_colonium()->add_resource(resource_type::stick, 1);
		 cout << "Work ant from colonium " << get_colonium()->get_name() << " get stick\n";
		 return;
	}
	if (h->get_resource_count(resource_type::rock) > 0) {
		h->take_resource(resource_type::rock);
		get_colonium()->add_resource(resource_type::rock, 1);
		cout << "Work ant from colonium " << get_colonium()->get_name() << " get rock\n";
		return;
	}
	if (h->get_resource_count(resource_type::drop) > 0) {
		h->take_resource(resource_type::drop);
		get_colonium()->add_resource(resource_type::drop, 1);
		cout << "Work ant from colonium " << get_colonium()->get_name() << " get drop\n";
		return;
	}
	if (h->get_resource_count(resource_type::leaf) > 0) {
		h->take_resource(resource_type::leaf);
		get_colonium()->add_resource(resource_type::leaf, 1);
		cout << "Work ant from colonium " << get_colonium()->get_name() << " get leaf\n";
		return;
	}
}

void work_ant:: print_type() {
	cout << "work ant";
}