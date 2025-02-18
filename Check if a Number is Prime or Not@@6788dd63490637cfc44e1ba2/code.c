#include <stdio.h>


int main() {
    int num, r = 1;
    scanf("%d", &num);
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            r = 0;
            break;
        }
    }
    if (r == 1 && num > 1) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
    return 0;
}
