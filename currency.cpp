#include <iostream>

int main()
{
    // all vaule are as of 6/06/2019
    double pesos, reais, soles;
    double dollars;

    std::cout << "Enter number of Colombian Pesos: ";
    std::cin >> pesos;

    std::cout << "Enter number of Brazilian Reais: ";
    std::cin >> reais;

    std::cout << "Enter number of Peruvian Soles: ";
    std::cin >> soles;

    dollars = 0.00051 * pesos + 0.26 * reais + 0.3 * soles;

    std::cout << "Total USD = $" << dollars << "\n";
}