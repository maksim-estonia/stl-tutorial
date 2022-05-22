#include <iostream>

class functionObj {
    public:
        int operator()(int x, int y) {
            return x*y;
        }
};

int main() {
    functionObj fo;

    int mult = fo(4,7);

    std::cout << "Multiplication of x and y: " << mult << std::endl;

    return EXIT_SUCCESS;
}
