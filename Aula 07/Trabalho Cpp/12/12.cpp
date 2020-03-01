#include <iostream>

using namespace std;

void user();
void cal();
void resu();

int i, x = 0, result = 0;

int main () {

	user();
	cal();
	resu();
	system("pause");
	return 0;

}

void user () {

	cout << "Digite a quantidade de numeros a serem lidos: ";
	cin >> x;

}

void cal () {

	int num[x];

	for(i = 0; i < x; i++){
		cout << "Digite os valores: ";
		cin >> num[x];
	}

	result = num[x]*num[x]/x;
}

void resu () {

	cout << "A media aritmetica dos numeros: "<<result<<".\n";
}
