/*
多路分支switch-case语句
因为大量级联if-else语句会导致性能下降，故使用swich-case语句
*/
#include <stdio.h>

int main() {
    /*
    const int MRN = 2;
    case MRN;仅C99可用
    */
    int type;
    scanf("%d",&type);

    switch (type)
    //switch控制表达式必须为int类
    {
    case 1:
    //case后跟常量
        printf("你好\n");
        break;
    case 2:
        printf("早上好\n");
        break;
    case 3:
        printf("晚上好\n");
        break;
    case 4:
        printf("再见\n");
        break;
    default:
        printf("啊，什么啊？\n");
    }
    //switc-case中case后必须用break，否则会继续道下一个有break的case
    //可认为case=路牌，其不能阻止进行

    //可写成：case 1: printf("1\n"); break;

    return 0;
}
