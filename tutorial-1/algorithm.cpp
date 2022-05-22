#include <iostream>

int main() {
    int i = 7;
    int j = 10;

    std::cout << "Value of i: " << i << std::endl;
    std::cout << "Value of j: " << j << std::endl;

    std::swap(i,j);

    std::cout << "After swapping: " << std::endl;
    std::cout << "Value of i: " << i << std::endl;
    std::cout << "Value of j: " << j << std::endl;
}