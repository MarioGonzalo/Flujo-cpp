#include <iostream>
#include <cmath>
//Dentro del namespace Geometria, crea las clases Circulo, Rectangulo, Triangulo, Cuadrado y Rombo.
namespace Geometria {
    class Circulo {
    private:
        double radio;
    public:
        Circulo(double r) : radio(r) {}
        double calcularArea() {
            return 3.14 * radio * radio;
        }
        double calcularPerimetro() {
            return 2 * 3.14 * radio;
        }
    };
    class Rectangulo {
    private:
        double base;
        double altura;
    public:
        Rectangulo(double b, double a) : base(b), altura(a) {}
        double calcularArea() {
            return base * altura;
        }
        double calcularPerimetro() {
            return 2 * (base + altura);
        }
    };
    class Triangulo {
    private:
        double base;
        double altura;
    public:
        Triangulo(double b, double a) : base(b), altura(a) {}
        double calcularArea() {
            return (base * altura) / 2;
        }
        double calcularPerimetro() {
            return 3 * base;
        }
    };
    class Cuadrado {
    private:
        double lado;
    public:
        Cuadrado(double l) : lado(l) {}
        double calcularArea() {
            return lado * lado;
        }
        double calcularPerimetro() {
            return 4 * lado;
        }
    };
    class rombo {
    private:
        double diagonalMayor;
        double diagonalMenor;
    public:
        rombo(double dM, double dm) : diagonalMayor(dM), diagonalMenor(dm) {}
        double calcularArea() {
            return (diagonalMayor * diagonalMenor) / 2;
        }
        double calcularPerimetro() {
            return 4* sqrt((diagonalMayor * diagonalMayor) + (diagonalMenor * diagonalMenor));
        }

    };
}
//En el main, crea un objeto de cada clase y muestra por pantalla el área y el perímetro de cada uno de ellos.
int main() {
    std::cout << "Introduce el radio del circulo: ";
    double radio;
    std::cin >> radio;
    Geometria::Circulo c(radio);
    std::cout << "Area: " << c.calcularArea() << std::endl;
    std::cout << "Perimetro: " << c.calcularPerimetro() << std::endl;
    std::cout << "Introduce la base del rectangulo: ";
    double baseR;
    std::cin >> baseR;
    std::cout << "Introduce la altura del rectangulo: ";
    double alturaR;
    std::cin >> alturaR;
    Geometria::Rectangulo r(baseR, alturaR);
    std::cout << "Area: " << r.calcularArea() << std::endl;
    std::cout << "Perimetro: " << r.calcularPerimetro() << std::endl;
    std::cout << "Introduce la base del triangulo: ";
    double baseT;
    std::cin >> baseT;
    std::cout << "Introduce la altura del triangulo: ";
    double alturaT;
    std::cin >> alturaT;
    Geometria::Triangulo t(baseT, alturaT);
    std::cout << "Area: " << t.calcularArea() << std::endl;
    std::cout << "Perimetro: " << t.calcularPerimetro() << std::endl;
    std::cout << "Introduce el lado del cuadrado: ";
    double lado;
    std::cin >> lado;
    Geometria::Cuadrado cu(lado);
    std::cout << "Area: " << cu.calcularArea() << std::endl;
    std::cout << "Perimetro: " << cu.calcularPerimetro() << std::endl;
    std::cout << "Introduce la diagonal mayor del rombo: ";
    double diagonalMayor;
    std::cin >> diagonalMayor;
    std::cout << "Introduce la diagonal menor del rombo: ";
    double diagonalMenor;
    std::cin >> diagonalMenor;
    Geometria::rombo ro(diagonalMayor, diagonalMenor);
    std::cout << "Area: " << ro.calcularArea() << std::endl;
    std::cout << "Perimetro: " << ro.calcularPerimetro() << std::endl;
    return 0;
}