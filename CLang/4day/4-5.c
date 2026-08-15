#include <stdio.h>

int main() {
    int x,digit = 0;
    scanf("%d",&x);

    while (x > 0) {
        digit = digit * 10 + x%10;
        x /= 10;
    }
    
    printf("逆序：%d\n",digit);

    return 0;
}
