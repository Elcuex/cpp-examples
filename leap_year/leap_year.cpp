#include <iostream>

int main() {
    
    int year = 0;
    bool repeat = true;

    while (repeat) {
    std::cout << "Please input desired four-digit number year: ";
    std::cin >> year;

    
        while(year<1000)
        {
            std::cout << "Please enter a four-digit number: ";
            std::cin >> year;
        }


        if (year % 4 != 0) {
            std::cout << year << " is not leap year :(\n";
        }

        else if (year % 100 == 0 && year % 400 != 0) {
            std::cout << year << " is not leap year :(\n";
        }

        else {
            std::cout << year << " is a leap year!\n";
        }

        std::cout << "Repeat? (Enter 1 if yes): ";
        std::cin >> repeat;
    }
}
