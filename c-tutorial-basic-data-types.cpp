#include <iostream>
#include <cstdio>
using namespace std;

/*
*   int ("%d")      : 4 bytes integer
*   long ("%ld")    : 8 bytes integer
*   char ("%c")     : 1 byte Character type
*   float ("%f")    : 4 bytes real value
*   double ("%lf")  : 8 bytes real value
*   signed range    : -2^(n-1) to 2^(n-1)-1
*   unsigned range  : upto 2^(n) - 1
*/
int main() {
    int a;
    long b;
    char c;
    float d;
    double e;

    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf", a, b, c, d, e);
    return 0;
}