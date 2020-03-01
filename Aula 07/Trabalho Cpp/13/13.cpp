#include "iostream"

using namespace std;

void cal ();
void result ();

int x, valor = 0, maior = 0, menor = 0;

int main () {

	cal();
	result();
	system("pause");
	return 0;
}

void cal () {

	for( x = 0; x <= 50; x++){
		cout << "Digite um valor: ";
		cin >> valor;

		if(valor > maior){
			maior = valor;
		}

		if(valor < menor){
			menor = valor;
		}
	}
}

void result () {

	cout << "O maior valor eh: "<<maior<<".\n";
	cout << "O menor valor eh: "<<menor<<".\n";
}