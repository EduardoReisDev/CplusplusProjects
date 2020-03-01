#include <iostream>

using namespace std;

int main(){

	int km=0, gaso=0, result=0;

		cout << "Digite a distância percorrida em quilômetros: ";
			cin >> km;

		cout << "Total de combustível gasto em litro: ";
			cin>> gaso;

		result = km/gaso;

		cout << "O consumo do carro foi de " <<result<< " quilômetros por litro. ""\n";

return 0;
}
