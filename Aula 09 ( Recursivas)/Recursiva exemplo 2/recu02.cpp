#include <iostream>
#include <math.h>

int potencia (int x, int y){
    if (y == 0){
        return 1;
    }

    else{
        return (x * potencia (x, y - 1));
    }
}

using namespace std;

int main (){

    int base = 2, expoente = 0, resultado;

    resultado = potencia(base, expoente);

    cout << base << " Elevado a "<<expoente<< " eh: " <<resultado;

    return 0;
}
