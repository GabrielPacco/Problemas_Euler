//La suma de los números primos por debajo de 10 es 2 + 3 + 5 + 7 = 17.

//Encuentra la suma de todos los números primos por debajo de dos millones.

#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
using namespace std;

int main(){

    long int i = 3;
    unsigned long long int rpta = 2;
    int band = 1;
    long int j;
    while(i < 2000000)
    {
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j == 0)
            {
                band = 0;
                break;
            }
        }
        if(band == 1)
            rpta += i;
        band = 1;
        i += 2;
    }
    cout<<"\nRespuesta: "<<rpta;
    cout<<"\n\n";
    return 0;
}

