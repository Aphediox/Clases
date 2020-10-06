#include "computadora.h"

computadora::computadora(){

}

computadora::computadora(std::string SO, std::string Nombre, unsigned int RAM, std::string CPU){
    this->SO = SO;
    this->Nommbre = Nombre;
    this->RAM = RAM;
    this->CPU = CPU;
}