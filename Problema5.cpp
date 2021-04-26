//2520 es el número más pequeño que se puede dividir por cada uno de los números del 1 al 10 sin ningún resto.
//¿Cuál es el número positivo más pequeño que es divisible por todos los números del 1 al 20?

#include <iostream>
#include <stdio.h>
using namespace std;

static unsigned long MCD(unsigned long a, unsigned long b);
static unsigned long mcm(unsigned long a, unsigned long b);

int main()
{
  unsigned long rpta = 1;
  unsigned long i;
  for (i = 1; i <= 20; i++) {
    rpta = mcm(rpta, i);
  }
  cout<<"Respuesta: "<<rpta;
  return 0;
}

unsigned long MCD(unsigned long a, unsigned long b)
{
  unsigned long r;
  if (a > b) {
    unsigned long t = a;
    a = b;
    b = t;
  }
  while (r = a%b) {
    a = b;
    b = r;
  }
  return b;
}

unsigned long mcm(unsigned long a, unsigned long b)
{
  unsigned long long p = (unsigned long long)a * b;
  return p/MCD(a, b);
}
