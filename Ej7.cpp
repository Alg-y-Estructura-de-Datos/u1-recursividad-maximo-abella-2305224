#include <iostream>
#include <vector>
#include <string>

void fillHora(int n,std::vector<int> &hora) {
    for (int i = 0; i < n; i++)
    {
        hora.push_back(i+1);
    }
}

void FillClases(int n,std::vector<std::string> clases) {
    std::string string;
    for (int i = 0; i < n; i++)
    {
        std::cout<<"Ingrese la clase n"<<i<<std::endl;
        std::cin>>string;
        clases.push_back(string);
    }
}

int main() {
    std::vector<int> horarios;
    std::vector<std::string> clases;

    
    return 0;
}