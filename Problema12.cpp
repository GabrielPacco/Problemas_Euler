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
//El número que se agregará a todos los números anteriores.
int i = 1;
//El número que suma todos los números anteriores.
int overallAdd = 0;
//Número máximo
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
