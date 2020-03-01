#include <iostream>

using namespace std;

void user();
void conta();
void result();

int dia = 0, mes = 0, ano = 0,resultano = 0,resultmes = 0, resultdias = 0, total = 0;

int main () {

	user ();
	conta ();
	result ();
	return 0;
}

void user () {

	cout << "Digite seu dia de nascimento: ";
	cin >> dia;

	cout << "Digite seu mes de nascimento: ";
	cin >> mes;

	cout << "Digite seu ano de nascimento: ";
	cin >> ano;
}

void conta () {

	resultano = (2017 - ano)*360;

	resultmes = mes*30;

	resultdias = dia;

	total = resultdias + resultmes + resultano;
}

void result () {

	cout << "O total de dias vividos sao de: "<<total<<" dias.\n";
}
