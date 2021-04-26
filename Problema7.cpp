#include <iostream>

using namespace std;

bool primo (int n){
    bool condicion;
    if(n!=1 && n!=0){
        for( int i=2; i<=n; i++ ){
            if(n%i == 0){
                if(n == i) {condicion = true;
                    return condicion;
                }
                else {
                    condicion = false;
                    return condicion;
                }
            }
        }
    }
    else condicion = false;
    return condicion;
}

int main()
{
    int numero=0;

    for(int i=2; i<500000; i++){
        if(primo(i)==true){
            numero++;
            if(numero==10001) cout<<"El numero es: "<<i;
        }
    }
}
