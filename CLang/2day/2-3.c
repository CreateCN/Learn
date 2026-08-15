//交换变量
#include <stdio.h>

int main() {
    int a = 5;
    int b = 6;
    //方法1
    int c;
    c = a;
    a = b;
    b = c;
    printf("法1：a=%d，b=%d\n",a,b);
    return 0;
}