#include <cstdint>
#include <cmath>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <unistd.h>

template <typename T> T muy_grande( const char* num )
{
  std::stringstream ss(num);
  T ret;
  return ss >> ret ? ret : 0;
}

std::string suma_larga()
{
  static const char* nombre_archivo = "C:/Files_prueba/trece.txt";

  uint64_t sum = 0;

  std::ifstream fin(nombre_archivo);

  if( !fin.is_open() ){
    std::cerr << "Fallo al abrir el archivo: " << nombre_archivo << std::endl;
    return "-1";
  }

  for( std::string line ; std::getline(fin,line);){
    // Solo nos importan los primeros 11 (10 + 1) dígitos
    // No necesitamos el soporte de 'Big Int'
    sum += muy_grande<uint64_t>(line.substr(0,11).c_str());
  }
  return std::to_string(sum).substr(0,10);
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[])
{
  std::cout << "Respuesta: " << suma_larga() << std::endl;
}
#endif // #if ! defined UNITTEST_MODE
