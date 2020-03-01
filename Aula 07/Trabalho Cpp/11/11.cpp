#include <iostream>

using namespace std;

void user();
void resu();

int x = 0, y = 0, z = 0, result = 0;

int main () {

	user();
	resu();
	system("pause");
	return 0;
}

void user () {

	cout << "Digite o valor do vertice X: ";
	cin >> x;

	cout << "Digite o valor do vertice Y: ";
	cin >> y;

	cout << "Digite o valor do vertice Z: ";
	cin >> z;
}

void resu () {

	if(x == y == z){
		cout << "Triangulo Equilatero!";
	}

	if(x == y || z && x == z || y && y == z || x){
		cout << "Triangulo Isoceles!";
	}

	if(x || y || z){
		cout << "Triangulo Escaleno!";
	}
}