#include <iostream>

using namespace std;

void user ();
int cal ();
void result ();
 
int numero1 = 0, numero2 = 0, numero3 = 0;

int main () {

	user();
	cal();
	result();
	system("pause");
	return 0;
}

void user () {

	cout << "Digite o primeiro numero: ";
	cin >> numero1;

	cout << "Digite o segundo numero: ";
	cin >> numero2;

	cout << "Digite o terceiro numero: ";
	cin >> numero3;
}

int cal () {

	if ((numero1<numero2<numero3&&(!(numero1>numero2>numero3) && (numero1<numero2>numero3));


void result () {

	cout << "Segue lista de numeros em ordem crescente: "<<numero1<<" ,"<<numero2<<" ,"<<numero3<<".\n";
}