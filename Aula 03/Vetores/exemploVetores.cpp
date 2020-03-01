#include <iostream>
#include <stdio.h>

using namespace std;

int main (){

    int sal[10], year[10];
    string name[10];

    for(int i=0; i<=2; i++){

        cout << "Digite seu nome: ";
        cin >> name[i];

        cout << "Digite sua idade: ";
        cin >> year[i];

        cout << "Digite seu salário: ";
        cin >> sal[i];

        cout << "----------------------------------------------\n";
    }

        for(int i=0; i<=2; i++){
        cout << "----------------------------------------------\n";
        cout << "O nome é "<<name[i]<<". \n";
        cout << "A idade é de "<<year[i]<<". \n";
        cout << "O salário é de "<<sal[i]<<". \n";
    }

return 0;
}
