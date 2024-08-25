#include <iostream>

int encontrarMayor(int &mayor,int numeros[],int n){
    if (n <= 0)
    {
        return 0;
    }
    if (numeros[n-1] > mayor)
    {
        mayor = numeros[n-1];
    }
    encontrarMayor(mayor,numeros,n-1);
    
};


int main() {
    std::cout<<"Programacion 3 recursividad ejercicio 4: "<<std::endl;
    int mayor=0,n = 7;
    int numeros[7] = {10,2,6,2,4,2};
    encontrarMayor(mayor,numeros,n);
    std::cout<<mayor<<std::endl;
}