#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>


class computadora{
    private:
    std::string SO;
    std::string Nommbre;
    unsigned int RAM;
    std::string CPU;
    public:
    computadora();
    computadora(std::string, std::string, unsigned int, std::string);
    
};


#endif
