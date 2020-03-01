#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void user ();
int result ();

int a = 0, b = 0, c = 0, x1 = 0, x2 = 0;
int continua = 1;  

int main () {

  user();
  result();
  system("pause");
  return 0;
}

void user () {
    
  cout << "Digite o valor de a: ";
    cin >> a;    
    
  cout << "Digite o valor de b: ";
    cin >> b;
    
  cout << "Digite o valor de c: ";
    cin >> c;
}

int result () {
    
  if( (b*b-4*a*c) >= 0){
      
    x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
      
      
    x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
      
      
    cout << "x1 eh igual a: "<<x1<<" e x2 eh igual a: "<<x2<<".\n";
  }

  else
  cout << "Esta equacao nao possui raizes reais!\n\n";
}