#include "computadora.h"

computadora::computadora(){

}

computadora::computadora(std::string SO, std::string Nombre, unsigned int RAM, std::string CPU){
    this->SO = SO;
    this->Nommbre = Nombre;
    this->RAM = RAM;
    this->CPU = CPU;
}

void computadora::setSO(std::string &so){
    this->SO = so;
}
void computadora::setNombre(std::string &nom){
    this->Nommbre = nom;
}
void computadora::setRAM(unsigned int ram){
    this->RAM = ram;
}
void computadora::setCPU(std::string &cpu){
    this->CPU = cpu;
}
