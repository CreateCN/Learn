#include <stdio.h>

int main() {
    int count,number = 0;
    int a = 1;

    printf("请输入你要平均的值（输入0停止）：");
    scanf("%d",&a);

    while (a != 0) {
        number += a;
        count++;
        printf("请输入你要平均的值（输入0停止）：");
        scanf("%d",&a);
    }
    
    printf("这些数的平均值为:%d\n",number/count);


    return 0;
}
