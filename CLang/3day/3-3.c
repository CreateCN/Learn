//ps:关系运算和Python中的类似，就不单独写了
//ber 怎么还有注释的课

#include <stdio.h>

int main() {
    int max = 0;
    int a,b;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);

    //法1
    max = b;
    if (a > b) {
        max =a;
    }

    printf("法1：%d大\n",max);

    //法2
    if (a > b) {
        max = a;
    } else {
        max = b;
    }

    printf("法2：%d大\n",max);

    return 0;
}