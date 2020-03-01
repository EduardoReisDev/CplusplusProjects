#include <iostream>

using namespace std;

int main(){
    int i=1 quantidade = 0, qtdpar = 0, qtdimpar = 0, numero = 0;

    cout << "\nDigite   Untidade de números a serem verificados: ";
    cin >> quantidade;
    while (i <= quantidade){
        cout << "\nDigite o " << i << " priemiro valor: "};
        cin >> numero;
        if (numero%2 == 0){
            qtdpar++;
        } else {
            qtdimpar++;
        }
        i++;
}

