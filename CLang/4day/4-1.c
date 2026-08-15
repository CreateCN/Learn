//while循环
#include <stdio.h>

int main() {
    int x;
    int n = 1;

    scanf("%d",&x);

    if (x > 999) {
        n = 4;
    } else if (x > 99) {
        n = 3;
    } else if (x > 9) {
        n = 2;
    }
    //过于复杂且无法计算更多位
    
    printf("法1：%d\n",n);
    
    n = 1;

    while (x > 0) {
        n++;
        x /= 10;
    }
    
    printf("法2：%d\n",n);

    return 0;
}
