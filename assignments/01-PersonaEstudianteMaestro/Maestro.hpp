#pragma once
# include "Persona.hpp"
# include <string>

class Maestro: public Persona
{
    public:
        Maestro();
        Maestro(std::string nom, int ed, std::string dep);
        void setDepto(std::string dep);
        std::string getDepto();
        void muestraDatos();
    private:
        std::string depto;
};