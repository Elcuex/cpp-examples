#include <iostream>

int main() {
    
    int year = 0;
    int yearP = 0;
    int yearM = 0;
    int yearC = 0;
    bool repeat = true;
    bool leap = false;

    while (repeat) {
    std::cout << "Please input desired four-digit number year: ";
    std::cin >> year;

    
        while(year<1000)
        {
            std::cout << "Please enter a four-digit number: ";
            std::cin >> year;
        }

        if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) {
            
            std::cout << year << " is not a leap year :(\n";
            
            yearP = year;
            yearM = year;
            yearC = year;
           
            while((yearP % 4 != 0 || (yearP % 100 == 0 && yearP % 400 != 0)))
            {
                yearP++;
                //std::cout << yearP << yearM;
            }
            
            while(yearM % 4 != 0 || (yearM % 100 == 0 && yearM % 400 != 0))
            {
                yearM--;
            }

            std::cout << yearP << " is the next leap year!\n";

            std::cout << yearM << " is the previous leap year!\n";

            if(abs(yearP - year) < abs((yearM - year))) {yearC = yearP;}
            else {yearC = yearM;}

            std::cout << yearC << " is the closest leap year!\n"; 

        }

        else {
            std::cout << year << " is a leap year!\n";
            leap = true;
        }

        std::cout << "Repeat? (Enter 1 if yes): ";
        std::cin >> repeat;
        leap = false;
    }
}
