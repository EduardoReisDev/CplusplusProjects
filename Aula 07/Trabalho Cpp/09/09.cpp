#include <iostream>

using namespace std;

void user ();
float resu ();

int sexo = 0;
float alt = 0, result = 0;

int main () {

	user ();
	resu ();
	system("pause");
	return 0;

}

void user () {

	cout << "Digite 1 para MASCULINO ou 2 para FEMININO: ";
	cin >> sexo;

	cout << "Digite sua latura em metros e centimentos (0.00): ";
	cin >> alt;
}

float resu () {

	if (sexo == 1){
		result = 72.7*alt-58;
		cout << result;
	}

	else {
		result = 62.1*alt-44.7;
		cout << result;
	}
}
	