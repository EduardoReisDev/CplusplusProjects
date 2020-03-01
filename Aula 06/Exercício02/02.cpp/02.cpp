#include <iostream>

using namespace std;

void users();
void valores();

int val1 = 0, val2=0, maior = 0;

int main()
{
	users();
	valores();
	system ("pause");
	return 0;
} 

void users(){

	cout << "Digite o primeiro valor: ";
	cin >>  val1;

	cout << "Digite outro valor: ";
	cin >> val2;
}

void valores() {

	if (val1 >= val2) {
		cout << "O "<<val1<<" eh maior.\n";
	}

	if (val2 >= val1) {
		cout << "O "<<val2<<" eh maior.\n";
	}
}