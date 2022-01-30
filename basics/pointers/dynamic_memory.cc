#include <iostream>

using namespace std;


int main () {  
    
    int *darr = new int[5]; // 5 spaces in memory
    darr[0] = 13;
    darr[1] = 73;
    darr[2] = 73;
    darr[3] = 73;
    darr[4] = 73;
    cout << darr << "=="<< &darr[0]<<  "\n";  // *darr points exactly to first value of the array
    // others values from indexes that is not 
    // part of original length are volatil
    cout << darr[19]<< "\n";  // this has a default value(0 or another strange number)
	darr[19] = 97;  // now its value is 97
    for (int i=0; i<20; i ++){
        cout << i<< " "<< darr[i]<< "\n";
    }


    delete[] darr;
    return 0;
}
