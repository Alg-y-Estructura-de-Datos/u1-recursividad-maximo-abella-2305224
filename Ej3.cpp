#include <iostream>
using namespace std;

int swap(int numero,int &invertido) {
    if ((numero) == 0) {
        return;
    }
    int resto = numero%10;
    invertido = invertido *10 + resto;
    (swap(numero/10,invertido));
}




int main() {

    cout << "Examen Final Prog 3" << endl;
    int numero = 12305,invertido = 0;
    swap(numero,invertido);
    std::cout<<invertido<<std::endl;


    return 0;
}
