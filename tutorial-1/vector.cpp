#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;

    for (int i=1; i<=10; i++) {
        v.push_back(i);
    }

    std::cout << "Size: " << v.size() << std::endl;

    v.resize(7);

    std::cout << "Size: " << v.size() << std::endl;

    if (v.empty() == false) {
        std::cout << "Not empty" << std::endl;
    }
    else {
        std::cout << "Empty" << std::endl;
    }

    std::cout << "Elements of the vector: " << std::endl;

    for (auto it = v.begin(); it != v.end(); it++) {
        std::cout << *it << std::endl;
    }

    return EXIT_SUCCESS;
}