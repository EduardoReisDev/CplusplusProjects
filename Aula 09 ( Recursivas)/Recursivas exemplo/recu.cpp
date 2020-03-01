#include <iostream>

using namespace std;

int main () {

    int valor1, valor2, resultado, opcao;

    cout << "\nDigite o primeiro valor: "<< endl;
    cin >>  valor1;

    cout << "\nDigite o segundo valor: "<< endl;
    cin >> valor2;

    resultado = valor1 + valor2;

    cout << "A soma dos valores eh: " << resultado << endl;

    cout << "\n Deseja calcular novamente? 1.SIM / 2.NAO" << endl;
    cin >> opcao;

    if (opcao == 1){
        main();
    }

    else{
        return 0;
    }
}
