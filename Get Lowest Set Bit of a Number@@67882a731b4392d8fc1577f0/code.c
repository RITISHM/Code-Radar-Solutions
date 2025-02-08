#include <stdio.h>

int getLowestSetBitPosition(int n) {
    return __builtin_ffs(n);
}

int main() {
    int number;
  
    scanf("%d", &number);
    
    int position = getLowestSetBitPosition(number);
    
    printf("%d",position-1);

    return 0;
}
