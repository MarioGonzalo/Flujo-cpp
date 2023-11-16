#include <iostream>
#include <cmath>
#include <cstdlib>

// Se crea un namespace llamado Matematicas que contiene todas las funciones matemáticas básicas
namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }

    float division(int a, int b) {
        return a / b;
    }

    int multiplicacion(int a, int b) {
        return a * b;
    }

    int potencia(int a, int b) {
        return pow(a, b);
    }

    float raizCuadrada(int a) {
        return sqrt(a);
    }

    float logaritmo(int a) {
        return log(a);
    }

    float seno(int a) {
        return sin(a);
    }

    float coseno(int a) {
        return cos(a);
    }

    float tangente(int a) {
        return tan(a);
    }

    int factorial(int a) {
        int factorial = 1;
        for (int i = 1; i <= a; i++) {
            factorial *= i;
        }
        return factorial;
    }
}

// En el main se llama a las funciones del namespace Matematicas
int main() {
    std::cout << "Introduzca dos numeros: " << std::endl;
    int a, b;
    std::cout << "Numero 1: ";
    std::cin >> a;
    std::cout << "Numero 2: ";
    std::cin >> b;

    std::cout << "La siguiente operacion es una suma" << std::endl;
    system("pause");
    std::cout << "Suma: " << Matematicas::suma(a, b) << std::endl;

    std::cout << "La siguiente operacion es una resta" << std::endl;
    system("pause");
    std::cout << "Resta: " << Matematicas::resta(a, b) << std::endl;

    std::cout << "La siguiente operacion es una division" << std::endl;
    system("pause");
    std::cout << "Division: " << Matematicas::division(a, b) << std::endl;

    std::cout << "La siguiente operacion es una multiplicacion" << std::endl;
    system("pause");
    std::cout << "Multiplicacion: " << Matematicas::multiplicacion(a, b) << std::endl;

    std::cout << "La siguiente operacion es una potencia" << std::endl;
    system("pause");
    std::cout << "Potencia: " << Matematicas::potencia(a, b) << std::endl;

    std::cout << "La siguiente operacion es una raiz cuadrada" << std::endl;
    system("pause");
    std::cout << "Raiz cuadrada: " << Matematicas::raizCuadrada(a) << std::endl;

    std::cout << "La siguiente operacion es un logaritmo" << std::endl;
    system("pause");
    std::cout << "Logaritmo: " << Matematicas::logaritmo(a) << std::endl;

    std::cout << "La siguiente operacion es un seno" << std::endl;
    system("pause");
    std::cout << "Seno: " << Matematicas::seno(a) << std::endl;

    std::cout << "La siguiente operacion es un coseno" << std::endl;
    system("pause");
    std::cout << "Coseno: " << Matematicas::coseno(a) << std::endl;

    std::cout << "La siguiente operacion es una tangente" << std::endl;
    system("pause");
    std::cout << "Tangente: " << Matematicas::tangente(a) << std::endl;

    std::cout << "La siguiente operacion es un factorial" << std::endl;
    system("pause");
    std::cout << "Factorial: " << Matematicas::factorial(a) << std::endl;

    std::cout << "Ya no hay más operaciones" << std::endl;
    system("pause");
    return 0;
}

