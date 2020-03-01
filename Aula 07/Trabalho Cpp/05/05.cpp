#include <iostream>

using namespace std;

int hr = 0, minu = 0, seg = 0, valor = 0;

void user ();
int logi ();
void result ();

int main () {

	user();
	logi ();
	result();
	system("pause");
	return 0;
}

void user () {

	cout << "Digite o tempo de duracao da fabrica expressa em segundos: ";
	cin >> valor;
}

int logi () {

	seg = valor;

	minu = valor/60;

	hr = valor/360;
}

void result () {

	cout << "Total de horas: "<<hr<<".\n";
	cout << "Total de minutos: "<<minu<<".\n";
	cout << "Total de segundos:"<<seg<<".\n";
}