#include <iostream>

using namespace std;

void user();
void horas();

int hora = 0;

int main()
{
	user ();
	horas();
	system("pause");
	return 0;
}

void user (){

	cout << "Digite a hora: ";
	cin >> hora;
}

void horas() {

	if (hora >= 0 && hora < 6) {
		cout << "Madrugada\n";
	}

	if (hora >= 6 && hora < 12) {
		cout << "Manhã\n";
	}

	if (hora >= 12 && hora < 18) {
		cout << "Tarde\n";
	}

	if (hora >= 18 && hora < 23) {
		cout << "Noite\n";
	}
}
	
	


