#include <stdio.h>

void update(int *a,int *b) {
    int temp = *a;
    *a += *b;
    temp >= *b ? 
        *b = temp - *b :
        *b = *b - temp;
}

int main() {
    /*
        A pointer in C is a way to share a memory address among different contexts (primarily functions). 
        They are primarily used whenever a function needs to modify the content of a variable, of which it doesn't have ownership.
    */
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}