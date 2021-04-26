#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>

uint64_t prox_termino_collatz(uint64_t anterior)
{
  uint64_t ret;
  if( 0 == (anterior%2)){
    ret = anterior/2;
  }else{
    ret = (3 * anterior)+1;
  }
  return ret;
}

static std::vector<int> conteos_anteriores(1000000,-1);

int contar_collatz_terminos_bruto(uint64_t comienzo)
{
  int count = 1;
  while( 1 != comienzo ){
    comienzo = prox_termino_collatz(comienzo);
    count++;
  }
  return count;
}

int cont_terminos_collatz(uint64_t comienzo)
{
  if( 1 == comienzo ) return 1;

  int count = 0;

  if( comienzo < 1000000 ){
    count = conteos_anteriores.at(comienzo);
    if( -1 == count ){
      count = cont_terminos_collatz(prox_termino_collatz(comienzo));
      count++;
      conteos_anteriores.at(comienzo) = count;
    }
  }else{
    count = contar_collatz_terminos_bruto(comienzo);
  }

  return count;
}

uint64_t secuencia_collatz_mas_larga_bruta(uint64_t max_check)
{
  int conteo_maximo = 0;
  int contador_max = 0;
  for (uint64_t i = 1; i < max_check; i++) {
      int terms = contar_collatz_terminos_bruto(i);
      if( conteo_maximo < terms ){
        conteo_maximo = terms;
        contador_max = i;
      }
  }
  return contador_max;
}

// Optimización, almacenar recuentos anteriores y omitir valores ya calculados.
uint64_t optar_secuencia_collatz_mas_larga(uint64_t max_check)
{
  int conteo_maximo = 0;
  int contador_max = 0;

  for (uint64_t i = 2; i < max_check; i++) {
    if( -1 == conteos_anteriores.at(i) ){
      int count = cont_terminos_collatz(i);
      if( conteo_maximo < count ){
        conteo_maximo = count;
        contador_max = i;
      }
    }
  }

  return contador_max;
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[])
{
  std::cout << "Check(1): " << cont_terminos_collatz(13) << std::endl;
  std::cout << "Check(2): " << contar_collatz_terminos_bruto(13) << std::endl;

  int respuesta = secuencia_collatz_mas_larga_bruta(1000000);
  std::cout << "Respuesta: " << respuesta
                          << '/' << contar_collatz_terminos_bruto(respuesta)
                          << std::endl;

  respuesta = optar_secuencia_collatz_mas_larga(1000000);
  std::cout << "Respuesta: " << respuesta
                          << '/' << cont_terminos_collatz(respuesta)
                          << std::endl;
}
#endif // #if ! defined UNITTEST_MODE
