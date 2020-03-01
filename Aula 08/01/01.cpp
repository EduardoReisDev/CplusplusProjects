#include <iostream>
#include <cstring>

using namespace std;

int main () {

    char nome[30], nomee[30];

    cout <<"Digite o nome: ";
    cin.getline(nome,30);

    strncpy(nomee, nome, 4);

    cout << "As quatro primeiras caracteres são: "<<nomee<<".\n";

return 0;
}
