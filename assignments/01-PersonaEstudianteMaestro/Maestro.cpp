#include "Maestro.hpp"
#include "Persona.hpp"

#include <iostream>
#include <string>

Maestro::Maestro(): Persona()
{
    depto="Leyes";
}

Maestro::Maestro(std::string nom, int ed, std::string dep): Persona(nom, ed)
{
    depto=dep;
}

void Maestro::setDepto(std::string dep)
{
    depto= dep;
}

std::string Maestro::getDepto()
{
    return depto;
}

void Maestro::muestraDatos()
{
    std::cout << "Nombre: " << nombre << " Edad: " << edad << " Departamento: " << depto << "\n";

}