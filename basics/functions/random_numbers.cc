#include <iostream>
#include <cstdlib>
#include <ctime>

void print_random_number(int from_, int to_, int count);
void print_random_number_srand(int from_, int to_, int count);

int main() {
    print_random_number(1, 100, 6);
    print_random_number_srand(1, 100, 6);
    print_random_number_srand(5, 10, 6);
    print_random_number_srand(10, 20, 6);
    return 0;
}

void print_random_number(int from_, int to_, int count) {
    std::cout << count << " random numbers between " << from_ << " and " << to_ << "\n";
    for (int i=0; i<count; i++) {
        std::cout << from_ + rand() % to_ << "\n"; 
    }
}

void print_random_number_srand(int from_, int to_, int count) {
    // this function regenerates the truly random numbers every time it is called
    srand(time(0));
    std::cout << count << " random numbers between " << from_ << " and " << to_ << "\n";
    for (int i=0; i<count; i++) {
        std::cout << from_ + rand() % to_ << "\n"; 
    }
}