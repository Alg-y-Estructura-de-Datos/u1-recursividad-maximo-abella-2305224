#include <iostream>

bool buscarint(unsigned int numero,unsigned int d) {
    if (numero == 0)
    {
        return false;
    }
    int num = numero%10;
    if (num == d)
    {
        return true;
    }
    buscarint(numero/10,d);
}

int main() {
    std::cout<<"Programacio 3 recursividad ejercicio 4: "<<std::endl;
    unsigned int n,d;
    std::cout<<"ingrese un numero"<<std::endl;
    std::cin>>n;
    std::cout<<"Ingrese el numero a buscar"<<std::endl;
    std::cin>>d;
    std::cout<<buscarint(n,d);
    return 0;
}