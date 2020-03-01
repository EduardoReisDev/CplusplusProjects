#include <iostream>

using namespace std;

void user ();
void result ();

int valor = 0;

int main () {

	user();
	result();
	system("pause");
	return 0;

}

void user () {

	cout << "TRUE = Par \nFALSE = Impar";
	cout << "\nDigite um valor: ";
	cin >> valor;
}

void result () {

	if (valor == 2)
	{
		cout << "TRUE.\n";
	}

	else{
		cout << "FALSE.\n";
	}
}