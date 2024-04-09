# include "poligono.hpp"

poligono::poligono()
{
    nLados=0;
}

poligono::poligono(int valX, int valY, int nLados) : Shape(valX, valY)
{
    this->nLados=nLados;
}

int poligono::getLados()
{
    return nLados;
}