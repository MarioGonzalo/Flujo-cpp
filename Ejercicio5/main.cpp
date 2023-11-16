#include <iostream>
#include <vector>
#include <map>
#include <set>


int main() {
    // Vector
    bool addMore = true; // Booleano para saber si se quiere añadir mas numeros
    std::vector<int> numeros{1, 2, 3, 4, 5};// Vector de numeros
    while (addMore == true) {
        // Bucle para añadir numeros al vector
        std::cout << "Vector de numeros: " << std::endl;
        for (int i = 0; i < numeros.size(); i++) {
            std::cout << numeros[i] << " ";
        }
        std::cout << std::endl;
        int numAdd;
        std::cout << "Introduce un numero para añadir al vector: ";
        std::cin >> numAdd;
        numeros.push_back(numAdd);
        std::cout << "Vector de numeros: " << std::endl;
        for (int i = 0; i < numeros.size(); i++) {
            std::cout << numeros[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "¿Quieres añadir mas numeros? (1 = Sí, 0 = No): ";
        std::cin >> addMore;
    }

    // Map
    std::map<std::string, int> edad; // Mapa de edades
    // Bucle para añadir edades al mapa, mostrarlas y eliminarlas
    std::cout << "Introduce tu nombre: ";
    std::string nombre;
    std::cin >> nombre;
    std::cout << "Introduce tu edad: ";
    int edadNum;
    std::cin >> edadNum;
    edad[nombre] = edadNum;
    std::cout << "Hola "<< nombre <<", tienes " << edad[nombre] << " años." << std::endl;
    std::cout << "Dale al enter para eliminar tu edad." << std::endl;
    system("pause");
    edad.erase(nombre);
    std::cout << "Hola "<< nombre <<", ahora tienes " << edad[nombre] << " años." << std::endl;

    // Set
    std::set<int> conjunto {1, 2, 3, 4, 5};
    system("pause");
    conjunto.insert(6);
    conjunto.erase(1);

    return 0;
}
