#include "world.h"
#include <fstream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	world* w = new world();
	ofstream out("simulation.log");
	w->start_game(out);
	out.close();
	return 0; 
} 