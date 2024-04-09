# pragma once
# include "Shape.hpp"

class poligono: public Shape
{
    public:
        poligono();
        poligono(int valX, int valy, int nLados);
        int getLados();
    private:
        int nLados;
};