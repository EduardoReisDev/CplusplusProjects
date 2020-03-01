#include <iostream>

using namespace std;

int main(){

        int i, x=0, idade=0, qntsim=0, qntnao=0;
        char lua;
            for (i=1; i<=100; i++){
                cout << "Você tem interesse de ir a lua? (s/n)";
                cin >> lua;
                cout << "Digite a sua idade: "
                cin >> idade;
                if(lua=='s' || lua=='S'){
                        qntsim++; // ou qntsim=qntsim+1
                }
                if(lua=='n' || lua=='N'){
                        qntnao++;
                }

                if(idade>=30){
                    if(lua=='s' || lua=='S'){
                        qntsim++; // ou qntsim=qntsim+1
                    }
                if(idade=<30){
                    if(lua=='s' || lua=='S'){
                        qntsim++;
                    }
                }

                count
                }


            }
return 0;
}
