//表达式

#include <stdio.h>

int main() {
    int t,hour1,minute1,hour2,minute2;

    printf("请输入第一个时间：");
    scanf("%d %d",&hour1,&minute1);
    printf("请输入第二个时间：");
    scanf("%d %d",&hour2,&minute2);
    
    if (hour1 < hour2) {
        t = (hour2 * 60 + minute2) - (hour1 * 60 + minute1);
    } else {
        t = (hour1 * 60 + minute1) - (hour2 * 60 + minute2);
    }

    printf("差值：%d小时%d分钟\n",t/60,t%60);
}