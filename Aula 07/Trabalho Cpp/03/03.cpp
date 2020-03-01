#include <iostream>

using namespace std;

void user ();
int result ();

int num,cont = 0; 

int main () { 

	user();
	result();
	system("pause");
	return 0;
}

void user () {

	cout << "Digite um valor:  "; 
	cin >> num; 
}

int result () {

	for (int i=1; i<=num; i++){
		if (num % i == 0) cont++; 
	}

	if (cont<=2){
		cout << "\nTRUE\n"; 
	}

	else{ 
	cout << "\nFALSE\n"; 
	}
}