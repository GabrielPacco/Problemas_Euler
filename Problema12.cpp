#include <iostream>
#include <limits>
#include <cmath>
int altamenteDivisibleTriangularNum();

int main() {
std::cout <<altamenteDivisibleTriangularNum() << std::endl;
return 0;
}

int altamenteDivisibleTriangularNum()
{
//El n�mero que se agregar� a todos los n�meros anteriores.
int i = 1;
//El n�mero que suma todos los n�meros anteriores.
int overallAdd = 0;
//N�mero m�ximo
int max = std::numeric_limits<int>::max();
for(int counter = 0; counter < max; counter++)
{
    int total = 0;
    int sum = overallAdd + i;
    i++;
    overallAdd = sum;

    int sqrtSum = (int)sqrt(sum);
    for(int c = 1; c <=sqrtSum;c++)
    {
        if(sum%c == 0)
        {
            total += 2;
        }
        if(total > 500)
        {
            return sum;
        }
    }

}
return 0;
}
