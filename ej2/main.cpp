#include <iostream>
#ifndef GEOMETRIA_H
#define GEOMETRIA_H

namespace Geometria {
    double calcularAreaTriangulo(double base, double altura);
    double calcularAreaCirculo(double radio);
    double calcular_cuadrados(double lado);
}

#endif

int main() {
    int r, b, h, l;
    std::cout << "Escriba el lado: \n";std::cin >> l;
    std::cout << "Escriba la altura: \n";std::cin >> h;
    std::cout << "Escriba la base: \n";std::cin >> b;
    std::cout << "Escriba el radio: \n";std::cin >> r;
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(b, h) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(r) << std::endl;
    std::cout << "Area del cuadrado: " << Geometria::calcular_cuadrados(l) << std::endl;
    return 0;
}