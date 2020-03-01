#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void randon ();
void print ();

int x = 0;

int main() {

	print();
	randon();
	system ("pause");
	return 0;
} 

void randon () {

	srand(time(NULL));

	x = rand() % 6 + 1;
}

void print () {

	cout << "Numero aleatorio eh: "<<x<<".\n";
}
