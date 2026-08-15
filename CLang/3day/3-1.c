//复合赋值和递增递减
#include <stdio.h>

int main() {
    int total;
    int sum,a = 5;

    printf("a++=%d\n",a++);
    printf("a=%d\n",a);
    //a值先使用，使用后自增
    printf("++a=%d\n",++a);
    printf("a=%d\n",a);
    //a值先自增，自增后使用
    return 0;
}