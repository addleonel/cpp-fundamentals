#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Refernce: https://www.cplusplus.com/reference/vector/vector/
    int amount;
    vector<int> numbers;
    cin >> amount;

    for(int i=0; i<amount; i++){
        int number;
        cin >> number;
        numbers.push_back(number);
    }  
    
    sort(numbers.begin(), numbers.end());

    for(int j=0; j<numbers.size(); j++)
        cout << numbers[j] << " ";
    return 0;
}