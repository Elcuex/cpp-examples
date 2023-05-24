#include <iostream>

int main() {
    double tempf;
    double tempc;

    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> tempc;

    tempf = tempc *1.8 +32;
    std::cout << "The temperature is " << tempf << " in Fahrenheit!\n";
}