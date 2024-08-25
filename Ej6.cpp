#include <iostream>
 
// EJERCICIO A TERMINAR


int contarPar(int n,int tam,int &pares) {
    if (n == 0) {
        return pares;
    }
    int x = n%10;
    if (x%2 == 0 && tam%2 != 0)
    {
        pares++;
    }
    contarPar(n/10,tam-1,pares);
}

int contardigitos(int numero) {
    int c=0;
    while (numero>0)
    {
        c++;
        numero = numero/10;
    }
    return c;
}

int main() {
    std::cout<<"Programacion 3 recursividad ejercicio 6: "<<std::endl;
    int numero,tam,pares=0;
    std::cout<<"Ingrese el numero a verificar"<<std::endl;
    std::cin>>numero;
    tam = contardigitos(numero);
    contarPar(numero,tam,pares);
    std::cout<<"La cantidad de numeros pares en posiciones impares es de "<<pares<<std::endl;
    return 0;
}