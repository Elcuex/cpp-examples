#include <iostream>

int main() {

    int tip = 0;
    int extra = 0;
    bool enough = false;

    while (!enough) 
    {
        std::cout << "Enter tip amount: ";
        std::cin >> tip;
        
        extra = 100-tip;
        enough = (extra <= 0) ? true : false;

        if(!enough) 
        {
            std::cout << "You wanted to tip " << tip << " dollars.\n";
            std::cout << "You needed to tip " << extra << " dollar(s) more!\n";
        }
    }
    std::cout << "You tipped " << tip << " dollars.\nThank you and have a nice day!";
}