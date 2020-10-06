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
    void setSO(std::string &so);
    void setNombre(std::string &nom);
    void setRAM(unsigned int ram);
    void setCPU(std::string cpu);

    std::string getSO();
    std::string getNombre();
    unsigned int getRAM();
    std::string getCPU();
    
};


#endif
