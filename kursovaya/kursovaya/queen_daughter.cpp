#include"all.h"

void queen_daughter::turn(world* w) {
	if (!exile) {
		exile_daughter(w);
	}
	else {
		time_of_last_laying += 1;
	}
}

void queen_daughter::exile_daughter(world* w) {
	exile = true;
	cout << "�������� ���� " << name << " �������� �������\n";
	colonium* col = create_own_colonium();
	get_colonium()->remove_ant(this);
	w->add_colonium(col);
	cout << "�������� ���� " << name << " ������� ���� ����������� ������� " << col->get_name() << "\n";
	set_colonium(col);

}

void queen_daughter::print_type() {
	cout << "�������� ����";
}

void queen_daughter::print_info() {
	queen_ant::print_info();
	cout << "\t���� �������� " << mother->get_name() << "\n\n";
}

colonium* queen_daughter::create_own_colonium() {
	colonium* col = new colonium(get_colonium()->get_name() + " �� " + get_name());
	col->set_queen(this);
	return col;
}

bool queen_daughter::check_parentness(queen_ant* q) {
	return q == mother;
}