#include "Estudiante.hpp"
#include "Maestro.hpp"

#include <iostream>

int main() 
{
  Estudiante juan{"Juan",25,"ISD"}, laura{};
  Persona rosa{"Rosa", 8}, pedro{};
  Maestro piti("Piti", 18, "Mercadotecnia"), poto;

  std::cout << "Los datos del estudiante 1 son:\n";
  juan.muestraDatos();

  std::cout << "Los datos del estudiante 2 son:\n";
  std::cout << "Nombre:" << laura.getNombre() << " Edad: " << laura.getEdad() << " Carrera: " << laura.getCarrera() << "\n";

  std::cout << "Los datos de la persona 1 son:\n";
  rosa.muestraDatos();

  std::cout << "Los datos de la persona 2 son:\n";
  std::cout << "Nombre: " << pedro.getNombre() << " Edad: " << pedro.getEdad() << "\n";

  std::cout << "Los datos de la persona 1 son:\n";
  piti.muestraDatos();

  std::cout << "Los datos de la persona 2 son:\n";
  std::cout << "Nombre: " << poto.getNombre() << " Edad: " << poto.getEdad() << "\n";

  return 0;
}
