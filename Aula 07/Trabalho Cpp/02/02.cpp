#include <iostream>

using namespace std;

void user ();
char result ();

int nota1 = 0, nota2 = 0, nota3 = 0;
char letra = 0, A = 0, P = 0, H = 0;

int main () {

	user ();
	result ();
	system ("pause");
	return 0;
}

void user () {
	
	cout << "Digite sua primeira nota: ";
	cin >> nota1;

	cout << "\nDigite sua segunda nota: ";
	cin >> nota2;

	cout << "\nDigite sua terceira nota: ";
	cin >> nota3;

	cout << "\nDigite A para fazer o calculo aritimedito. \nDigite P para fazer a media ponderada. \nDigite H para fazer a media harmonica. \n";
	cin >> letra ;
}

char result () {

	if(letra == 'A'){
		A = (nota1*nota2*nota3)/3;
		cout << "A media aritimedica foi de:"<<A<<".\n";
	}

	if(letra == 'P'){
		P = (nota1*1 + nota2*2 + nota3*3 )/6;
		cout << "A media panoramica foi de: "<<P<<".\n";
	}

	if(letra == 'H'){
		H = (3/((1/nota1)+(1/nota2)+(1/nota3)));
		cout << "A media harmonica foi de: "<<H<<".\n";
	}
}
	

