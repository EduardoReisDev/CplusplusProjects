#include <iostream>

using namespace std;

int main() {

    float p=0, a=0, imc=0;

    cout << "Digite seu peso: ";
    cin >> p;

    cout << "Digite sua altura: ";
    cin >> a;

            imc=p/(a*a);

            cout <<" Seu IMC é de "<<imc<<".";

            if (imc<=16){
                cout << " Magreza grave";
            }

            if (imc>=16 && imc<17){
                cout << " Magreza moderada";
            }

            if (imc>=17 && imc<18.5){
                cout << " Magreza leve";
            }

            if (imc>=18,5 && imc<25){
                cout << " Saúdavel";
            }

            if (imc>=25 && imc<30){
                cout << " Sobrepeso";
            }

            if (imc>=30 && imc<35){
                cout << " Obesidade Grau 1";
            }

            if (imc>=35 && imc<40){
                cout << " Obesidade Grau 2 (Severa)";
            }

            if (imc>=40){
                cout << " Obesidade Grau 3 (Mórbida)";
            }

return 0;

}
