#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int year;
    scanf("%d",&year);
    if (!(year%400)){
        printf("Leap Year");
     }
    else if (!(year%4)&&!(year%100)){
        printf("Leap Year");
     }
    else{
        printf("Not a Leap Year");
     }

    return 0;
}