#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {

  for (int i=0; i<text.length()/2; i++) {
    if (text[i] != text[text.length()-i-1]) {return false;}
    //std::cout << text[i] << " " << text[text.length()-i-1] << "\n";    //debug test
  }
  return true;
}

std::string tf(bool u) {
    if(u) {return "That word is";}
    else {return "That word isn't";}
}

int main() {
  
  std::string word;

  std::cout << "I will check if this word is a palindrome: ";
  std::cin >> word;
  std::cout << tf(is_palindrome(word)) << " a palindrome!\n";
  
}