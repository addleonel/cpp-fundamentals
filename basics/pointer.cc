#include <cstdio>

void change_memory_location(int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    int x = 10;
    int y = 7;
    printf("x=%d, y=%d \n", x, y);
    change_memory_location(&x, &y);
    printf("x=%d, y=%d \n", x, y);
    
    return 0;
}
