#include <iostream>

using namespace std;

int main()
{
    int valor, passos=0, ip=0, ii=0, vetPar[5], vetImp[5];


        while(passos<=13).
        {
            if(ip==5)
            cout<<"\nPar cheio!\n";
            if(ii==5)
            cout<<"Impar cheio!\n";
            cout << "Digite um valor: ";
            cin >> valor;
            if(ip<=4)
            {
              if(valor %2 == 0)
              {
                vetPar[ip]=valor;
                ip++;
              }
            }
            
            if(ii<=4){
               if(valor %2==1)
               {
                  vetImp[ii]=valor;
                  ii++;
               }
             }
         
            if(ii==5&&ip==5)
            break;
        passos++;
     }
        for(int i=0; i<=4; i++){
            cout << "Os valores pares s�o: "<<vetPar[i]<<". \n";
            }
        
        for(int i=0; i<=4; i++){
           cout << "Os valores impares s�o: "<<vetImp[i]<<". \n";
        }

    return 0;
}
