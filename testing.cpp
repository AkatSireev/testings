#include <iostream>
#include <cmath>

int main() {
    double number = 1.1;
    double roundedNumber = round(number); // Округляем число

    std::cout << "Исходное число: " << number << std::endl;
    std::cout << "Округленное число: " << roundedNumber << std::endl;

    return 0;
}
