#include <iostream>

using namespace std;

int main(){

        int i, x=0, result=0;

            cout << "Digite um número inteiro: ";
            cin >> x;

                for (i=0; i<=x; i++){
                    result=(result+i);
                    }

            cout << "A soma deu : " <<result<< ".";

        return 0;
}
