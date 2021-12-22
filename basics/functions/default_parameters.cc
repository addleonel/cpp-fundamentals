#include <iostream>


void print_message(const std::string &message, const std::string &name = "World") {
  std::cout << message << ", " << name << "!" << "\n";
}

int main() {
    print_message("Hello");
    print_message("Hello", "Leonel");
    return 0;
}