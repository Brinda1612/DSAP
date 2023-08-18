#include <iostream>

int main() {
    int rows=3;
    int i = rows;
    while (i >= 1) {
        int j = 1;
        while (j <= i) {
            std::cout << i << " ";
            j++;
        }
        std::cout << std::endl;
        i--;
    }

    return 0;
}
