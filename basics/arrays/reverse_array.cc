#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int count;
    int item;
    scanf("%d", &count);
    int numbers[count];
    
    for(int i=0; i<count; i++){
        scanf("%d", &item);
        numbers[count-(i + 1)] = item;
        //printf("index=%d, value=%d\n", count-(i+ 1), item);
    }
    
    //printf("index_0=%d", numbers[0]);
    for(int j=0; j<count; j++){
        printf("%d ", numbers[j]);
    }
    return 0;
}
