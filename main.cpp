#include "computadora.cpp"

main(){

    computadora cp1;
    computadora cp2("Uwuntu", "jorge", 64, "Ryzen 4");
    cp2.setRAM(12);
    std::cout << cp2.getSO() << std::endl;
    std::cout << cp2.getRAM() << std::endl;
    return 0;

}
