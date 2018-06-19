#include "listaEncadeada.h"

int main() {

	using namespace std;
	LinkedList<int> list;

	list.PushBack(50);
	list.PushBack(60);
	list.PushBack(70);
	list.PushBack(80);
	list.PushFront(10);
	list.PushFront(20);
	list.PushFront(30);
	list.PushFront(40);
	
	list.Print();

	cout << "índice do 50: " << list.Search(50) << endl;

	cout << "indice 4: " << list.GetElement(7) << endl;

	cout << "Removendo no indice 3: ";
	list.Remove(7);
	list.Print();
	cout << "Tamanho " << list.Length() << endl; 
	list.Erase();	
	cout << "???" << endl;
	list.Print();

	return 0;
}