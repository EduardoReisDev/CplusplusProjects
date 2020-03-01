#include <iostream>

using namespace std;

int main()
{
        float  maior = 0, total = 0, vetor[5];

        for(int i=0; i<=5; i++)
        {
            cout << "Digite um valor válido: ";
            cin >> vetor[i];
        }

        for(int i=0; i<=5; i++)
        {
            if(vetor[i] > maior)
            maior = vetor[i];
        }

        for(int i=0; i<=5; i++)
        {
            total = vetor[i]/maior;
            cout << "O vetor ficou com os seguintes valor :"<<total<<". \n";
        }

    return 0;
}
