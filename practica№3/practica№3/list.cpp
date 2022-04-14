
#include <iostream>
using namespace std;
int fmenu(); 
struct List
{
	List* prev; 
	char data;
	List* next; 
};
List* input_item(List* tail);
List* find_item(char value, List* head);
List* insert_item(List* item, char value);
void exit_programm();
void add_item(char value3, char value2, List* head);
void print_spis(List* head);
void print_spis_rev(List* head);
int main()
{
	List* head = nullptr;
	while (true) 
		switch (fmenu())
		{
		case 1:head = input_item(head); break;
		case 2:char value3, value2; cout << "vvedi value dlya poiska:";
			cin >> value3;
			cout << endl << "vvedi value dlya dobavlenya:"; 
			cin >> value2;
			add_item(value3, value2, head); break;
		case 3:print_spis(head); break;
		case 4:exit_programm();
		case 5:print_spis_rev(head);
		default:cout << "neveren punkt menu, povtorite\n";
			break;
		} 
}
void flush_stdin()
{
	cin.clear();
	while (cin.get() != '\n');
}
int fmenu()
{
	int q;
	cout << "1. vvod elementa\n";
	cout << "2. dobavlenie elementa v seredinu\n";
	cout << "3. vivod spiska\n";
	cout << "4. zavershenie raboti\n";
	cout << "5. vivod spiska v obratnom poryadke\n";
	cin >> q;
	return q;
}
List* input_item(List* head)
{
	char value;
	cout << endl << "vvedite znachenie elementa:";
	cin >> value;
	return insert_item(head, value);
}
List* insert_item(List* head, char value) {
	List* pCurrent = new List;
	pCurrent->data = value;
	if (head == nullptr)
	{
		pCurrent->prev = pCurrent;
		pCurrent->next = pCurrent;
		return pCurrent;
	}
	else
	{
		List* item = head->prev; 
		pCurrent->prev = item;
		pCurrent->next = item->next;
		item->next->prev = pCurrent;
		item->next = pCurrent;
	}
	return head;
}
void print_spis(List* head)
{
	if (head == 0) {
		cout << "elementov v spiske net" << endl;
		 return;
	}
	List* pCurrent = head;
	cout << pCurrent->data << " ";
	pCurrent = pCurrent->next;
	while (pCurrent != head)
	{
		cout << pCurrent->data << " ";
		pCurrent = pCurrent->next;
	}
	cout << "\n";
}
void print_spis_rev(List* head)
{
	if (head == 0) {
		cout << "elementov v spiske net" << endl;
		return;
	}
	List* pCurrent = head;
	cout << pCurrent->data << " ";
	pCurrent = pCurrent->prev;
	while (pCurrent != head)
	{
		cout << pCurrent->data << " ";
		pCurrent = pCurrent->prev;
	}
	cout << "\n";
}
void exit_programm() { exit(1); }
List* find_item(char value, List* head)
{
	if (head == nullptr) {
		return nullptr;
	}
	if (head->data == value) {
		return head;
	}
	List* current = head->next;
	while (current != head) {
		if (current->data == value) {
			return current;
		}
		current = current->next;
	}
	return nullptr;
}
void add_item(char value3, char value2, List* head)
{
	List* find = find_item(value3,head);
	if (find != nullptr) {
		insert_item(find->next, value2);
	}
}
