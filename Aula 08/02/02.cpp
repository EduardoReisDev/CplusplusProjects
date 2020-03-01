#include <iostream>
using namespace std;
int main()
{
    string nome;
    
    int posi = 0, limite =0;
    
    cout << "Digite o nome:";
    cin >>nome;
    
    limite = nome.length();
    
    for(;posi < limite; posi++){
        if((posi+1) % 2 != 0){
            cout << "As letras na posição impar são: " <<nome[posi]<<".\n";
        }
    }
}