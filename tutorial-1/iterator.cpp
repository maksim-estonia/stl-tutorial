#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> ar = {1, 2, 3, 4, 5};

    std::vector<int>::iterator ptr;

    std::cout << "The elements of vector are: " << std::endl;

    for(ptr=ar.begin(); ptr < ar.end(); ptr++) {
        std::cout << *ptr << std::endl;
    }

    return EXIT_SUCCESS;

}