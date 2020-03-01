#include <iostream>

using namespace std;

int main()
{
    string vetorA[10], vetorB[10], temp[10];

        for(int i=0; i<=5; i++)
        {
            cout << "Digite um valor válido para o primeiro vetor: ";
            cin >> vetorA[i];
        }
        for(int i=0; i<=5; i++)
        {
            cout <<"Digite um valor válido para o segundo vetor: ";
            cin >> vetorB[i];
        }
        for(int i=0;i<=5; i++){
            cout<<vetorA[i]<<"     "<<vetorB[i]<<"\n";
            temp[i]=vetorB[i];
            vetorB[i]=vetorA[5-i];
        }
        cout<<"\n\n\n\n\n";

        for(int i=0;i<=5;i++){
            vetorA[i]=temp[5-i];
        }
        for(int i=0;i<=5;i++){
            cout<<vetorA[i]<<"     "<<vetorB[i]<<"\n";
        }
    return 0;
}
