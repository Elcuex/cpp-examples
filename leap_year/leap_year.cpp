#include <iostream>
#include <math.h>

bool leapY (int year) {
    if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) {return false;}
    else {return true;}
}

int main() {
    
    int year = 0;
    int yearP = 0;
    int yearM = 0;
    int yearC = 0;
    bool repeat = true;

    while (repeat) {

        std::cout << "Please input desired four-digit number year: ";
        std::cin >> year;

        
        while(year<1000)
        {
            std::cout << "Please enter a four-digit number: ";
            std::cin >> year;
        }

        std::cout << leapY(year) << "\n";

        if (!leapY(year)) {
            
            std::cout << year << " is not a leap year :(\n";
            
            yearP = year;
            yearM = year;
            yearC = year;
           
            while(!leapY(yearP))
            {
                yearP++;
                //std::cout << yearP << yearM;                          debugging numbers
            }
            
            while(!leapY(yearM))
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
        }

        std::cout << "Repeat? (Enter 1 if yes): ";
        std::cin >> repeat;
    }
}
