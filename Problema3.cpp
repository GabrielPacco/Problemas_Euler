//Los factores primos de 13195 son 5, 7, 13 y 29.
//¿Cuál es el factor primo más grande del número 600851475143?

#include <iostream>
using namespace std;

main(){

    long long i, num = 600851475143;

    for (i = 3; i != num; i += 2)
    {
        if (num % i == 0) {
            num = num / i;
        }
    }

    cout<<"El resultado es: "<< num;
    return 0;
}
