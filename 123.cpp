#include <iostream>

void main() {
    float sum = 0;
    int x;

    std::cin >> x;

    for (int i; i <= 0; i++) {
        sum += 1.0/i;
    }
    std::cout << sum;
}