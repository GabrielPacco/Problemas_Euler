#include <iostream>
#include <vector>

uint64_t Camino_celosia(size_t tam_cuadricula)
{
  std::vector< uint64_t > cuadricula((tam_cuadricula+1)*(tam_cuadricula+1),1);

  for (int x = tam_cuadricula-1; 0 <= x ; x--) {
    for (int y = tam_cuadricula-1; 0 <= y; y--) {
      int pos = (y*(tam_cuadricula+1))+x;
      cuadricula.at(pos) = cuadricula.at(pos+1) + cuadricula.at(pos+(tam_cuadricula+1));
    }
  }
  return cuadricula.at(0);
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[])
{
  std::cout << "Respuesta: " << Camino_celosia(2) << std::endl;
  std::cout << "Respuesta: " << Camino_celosia(20) << std::endl;
  return 0;
}
#endif // #if ! defined UNITTEST_MODE
