#include<iostream>

int main()
{
    std::cout << "Ingrese un número: ";
    int num = 0;
    std::cin >> num;
    if (num > 15) {
        std::cout << "num es mayor que 15" << std::endl;
    } else if (num > 5) {
        std::cout << "num esta entre 6 y 15" << std::endl;
    } else {
        std::cout << "num es menor o igual a 5" << std::endl;
    }
}
