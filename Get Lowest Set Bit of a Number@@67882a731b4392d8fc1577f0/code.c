#include <stdio.h>

int getLowestSetBitPosition(int n) {
    return __builtin_ffs(n);
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    int position = getLowestSetBitPosition(number);
    
    printf("%d",position);

    return 0;
}
