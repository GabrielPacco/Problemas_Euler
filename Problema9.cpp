//Existe exactamente un triplete pitagórico para el cual a + b + c = 1000.
//Halla el producto abc .

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a,b,c;
    int rpta=0;
    for (a=1;a<500;a++){
  for (b=1;b<500;b++){
    for (c=1;c<500;c++){
      if (a+b+c==1000){
        if((a*a)+(b*b)==(c*c)){
          rpta=a*b*c;
          break;
                                }
                  }
          }
  }
     }

  cout<<"Respuesta: "<<rpta;

}
