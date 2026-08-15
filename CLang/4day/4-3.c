#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(0));
    int a,count = 0;
    int number = rand()%100+1;

    printf("已设好数\n");
    do {
        printf("请输入你猜的数：");
        scanf("%d",&a);
        count++;
        if (a > number) {
            printf("大了\n");
        } else if (a < number) {
            printf("小了\n");
        }
        
    } while (a != number);

    printf("猜对了，x为%d，共猜了%d次\n",number,count);
    

    return 0;
}
