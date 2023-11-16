#include <iostream>
#include <cmath>

namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;
        const double n = 6.022*std::pow(10, 23);
        double num_nucleos(double masa, double a){
            return (n * masa)/ a;
        }
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
}

int main() {
    int n, pa;
    std::cout << "Escriba la masa: \n";std::cin >> n;
    std::cout << "Escriba el peso atomico: \n";std::cin >> pa;
    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(n) << std::endl;
    std::cout << "Numero de nucleos: " << Ciencia::Fisica::num_nucleos(n, pa) << std::endl;
    return 0;
}