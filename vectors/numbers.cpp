#include <iostream>
#include <vector>

int main() {

  int sum_even = 0;
  int product_odd = 1;

  std::vector<int> my_num(6);
  my_num = {2, 4, 3, 6, 1, 9};
  
  for(int i = 0; i <= my_num.size()-1; i++) 
  {
    if (my_num[i] % 2 == 0) {
        sum_even = sum_even + my_num[i];
    }
    //std::cout << "Debug " << sum_even << "\n";

    else {
        product_odd = product_odd * my_num[i];
    }
    //std::cout << "Debug " << product_odd << "\n";
  }
  std::cout << "Sum of even numbers is " << sum_even << "\n";
  std::cout << "Product of odd numbers is " << product_odd << "\n";
}