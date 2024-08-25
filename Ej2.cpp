#include <iostream>
using namespace std;

int sumarN(int n) {
    if (n == 1)
    {
        return 1;
    }
    return (n+sumarN(n-1));
}


int main() {
    cout << "Programacion 3 recursividad ejercicio 2: " << endl;
    int numero;
    std::cout<<"Ingrese el numero a sumar"<<std::endl;
    std::cin>>numero;
    std::cout<<sumarN(numero)<<std::endl;
    return 0;
}
