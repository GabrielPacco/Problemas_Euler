#include <iostream>
using namespace std;

int main()
{
    int Fibo_a = 0;
    int Fibo_b = 0;
    int Fibo_c = 1;
    int suma=0;
    while(Fibo_c <= 4000000)
    {
        suma += (Fibo_c % 2 == 0) ?
            Fibo_c : 0;
        Fibo_a = Fibo_b;
        Fibo_b = Fibo_c;
        Fibo_c = Fibo_a + Fibo_b;
    }

    cout << suma<< "\n";
}
