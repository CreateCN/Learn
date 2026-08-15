//for循环
#include <stdio.h>

int main() {
    int n,factor = 1;
    printf("输入n的值：");
    scanf("%d",&n);

    // int i = 1;

    for (int i = 1 ; i <= n; i++) {
        factor *= i;
    }
    
    printf("n的阶乘为：%d\n",factor);

    return 0;
}
