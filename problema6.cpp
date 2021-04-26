//La suma de los cuadrados de los primeros diez números naturales es, 385
//El cuadrado de la suma de los primeros diez números naturales es, 3025
//Calcula la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma.
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int sc=0;
	int sd=0;
	int s=0;
	//Sumar los cuadrados 1-100
	for(int i=1;i<101;i++){
		sc+=pow(i,2);
	}
	//Sumar del 1 al 100
	for(int j=1;j<101;++j){
		sd+=j;
	}
	//s cuadrado de la suma de los numeros
	s=pow(sd,2);
	cout<<"\n\nRespuesta: "<<s-sc;
	cout<<"\n";
	return 0;
}
