//Un número palindrómico se lee igual en ambos sentidos. El palíndromo más grande hecho del producto de dos números de 2 dígitos es 9009 = 91 × 99.
//Encuentra el palíndromo más grande formado por el producto de dos números de 3 dígitos.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int may_prod = 0;
    for (int i = 100; i < 1000; ++i){
        for (int j = 100; j < 1000; ++j){
            int prod_actual = i * j;
            std::string prod_actual_str = std::to_string(prod_actual);
            if (
                (prod_actual_str == std::string{ prod_actual_str.rbegin(), prod_actual_str.rend() }) &&
                (prod_actual > may_prod)
            )
            {
                may_prod = prod_actual;
            }
        }
    }
    std::cout << may_prod << "\n";
}
