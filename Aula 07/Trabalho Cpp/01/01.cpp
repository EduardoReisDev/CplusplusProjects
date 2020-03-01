#include <iostream>

using namespace std;

void user ();
int conta ();
void print ();

int raio = 0, result = 0;

int main () {

	user();
	conta ();
	print();
	system ("pause");
	return 0;
}

void user () {

	cout << "Digite o raio da esfera: ";
	cin >> raio;
}

int conta () {

	result = 4*3.14*raio*raio*raio/3;
}

void print () {

	cout << "O volume da esfera eh: "<<result<<" centimentros cubicos.\n";
}