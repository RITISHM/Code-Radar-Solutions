#include <stdio.h>
#define pi 3.14
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float r;
    scanf("%f",&r);
    printf("Area: %.2f", pi*r*r);
    return 0;
}