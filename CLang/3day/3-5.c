//级联的if-else
#include <stdio.h>

int main() {
    int x,f;
    printf("请输入x的值：");
    scanf("%d",&x);


    if (x < 0) {
        f = -1;
    } else if (x == 0)
    {
        f = 0;
    } else {
        f = 2 * x;
    }
    
    //什么叫C没有elif？VS Code发力了

    printf("x对应的解为：%d\n",x);


    return 0;
}
