#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char nome[50];

    cout << "Digite um nome: ";
    cin.getline(nome,50);

    cout << "O nome armazenado é "<<nome<<" e tem "<<strlen(nome)<<" caracteres.\n";

    return 0;
}
