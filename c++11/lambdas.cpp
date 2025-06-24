#include <iostream>

int main() {

    /*
    [captura](parámetros) -> tipo_de_retorno {
        // cuerpo
    };


    or 

    type name = [capture](parameters) { CODE }
    */

    auto suma = [](int a, int b) {
        return a + b;
    };

    std::cout << suma(3, 4) << std::endl;  // Imprime 7

    //VALOR CAPTURE
    int x = 10;
    auto f = [x]() { std::cout << x << std::endl; };
    f();  // imprime 10

    //REFERENCE 
    auto f = [&x]() { x = 20; };
    f();
    std::cout << x << std::endl;  // imprime 20

    //AUTO
    int a = 1, b = 2;
    auto f = [=]() { return a + b; };   // VALOR
    auto g = [&]() { a++; b++; };       // REFERENCE
    return 0;
}