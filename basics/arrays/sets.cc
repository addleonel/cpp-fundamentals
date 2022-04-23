#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> s;
    int number, y, x;
    cin >> number;
    while (number >0) {

        cin >> y >> x; // y = type, x = an integer

        if (y == 1) { // Add an element to the set
            s.insert(x);
        }else if (y == 2) { // Delete an element from the set
            s.erase(x);
        }else if (y == 3) {  // If the number is present in the set, Yes or No
            if (s.find(x) != s.end()) {
                cout << "Yes\n";
            }
            else {
                cout << "No\n";
            }
        }
        
        number --;
    }

    return 0;
}

