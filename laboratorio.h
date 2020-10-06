#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "computadora.cpp"

class laboratorio:public computadora{
    private:
        computadora Lab[5];
        size_t ultimo;
    public:
    laboratorio();
    void agregarCP(const computadora &cp);
    void mostrar();
};

#endif