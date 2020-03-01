#include <iostream>

using namespace std;

int main(){

int val1 = 0, val2 = 0, val3 = 0, val4 = 0;
int result = 0;

cout << "Digite sua primeira nota: ";
cin >> val1;

cout << "Digite sua segunda nota: ";
cin >> val2;

cout << "Digite sua terceira nota: ";
cin >> val3;

cout << "Digite sua quarta nota: ";
cin >> val4;

result = (val1 + val2 + val3 + val4)/4;

cout << "A media dos 4 notas é: " <<result<< "\n";

return 0;
}

