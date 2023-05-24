#include <iostream>

int main() {
  
  double weight = 0;
  int planet_num;
  
  std::cout << "Tell us your weight on Earth: ";
  std::cin >> weight;
  
  std::cout << "Tell us which planet you want to go to: ";
  std::cin >> planet_num;
  
  switch (planet_num)
  {
    case 1:
    weight = weight *0.38;
    std::cout << "Your weight on Mercury is " << weight << "\n";
    break;
    case 2:
    weight = weight *0.91;
    std::cout << "Your weight on Venus is " << weight << "\n";
    break;
    case 3:
    weight = weight *0.38;
    std::cout << "Your weight on Mars is " << weight << "\n";
    break;
    case 4:
    weight = weight *2.34;
    std::cout << "Your weight on Jupiter is " << weight << "\n";
    break;
    case 5:
    weight = weight *1.06;
    std::cout << "Your weight on Saturn is " << weight << "\n";
    break;
    case 6:
    weight = weight *0.92;
    std::cout << "Your weight on Uranus is " << weight << "\n";
    break;
    case 7:
    weight = weight *1.19;
    std::cout << "Your weight on Neptune is " << weight << "\n";
    break;
  }
  
  
  
  
  
}