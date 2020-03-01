#include <iostream>

using namespace std;

void user();
void result();

int valor = 0, par = 0, impar = 0;

int main () {

	user ();
	result ();
	system("pause");
	return 0;
}

void user () {

	cout << "TRUE = Positivo \nFALSE = Negativo";

	cout << "\nDigite um valor: ";
	cin >> valor;
}

void result () {

	if(valor >= 0){
		cout << "TRUE.\n";
	}

	else{
		cout << "FALSE.\n";
	}
}


