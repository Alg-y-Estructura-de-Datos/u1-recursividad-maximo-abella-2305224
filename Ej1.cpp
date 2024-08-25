#include <iostream>
using namespace std;

double potencia(double n,int pot) {
    if (pot <= 1)
    {
        return n;
    }
    return (n*potencia(n,pot-1));
}
int main() {
    cout << "Programacion 3 recursividad ejercicio 1:" << endl;
    int pot;
    double num;
    std::cout<<"Ingrese un numero a potenciar"<<std::endl;
    std::cin>>num;
    std::cout<<"Ingrese la potencia"<<std::endl;
    std::cin>>pot;
    std::cout<<"la potencia es "<<potencia(num,pot);
    return 0;
}
