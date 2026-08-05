#include <stdio.h>

int main() {
    int amount = 0;
    int price = 0;

    printf("请输入总金额（元）：");
    scanf("%d",&amount);
    printf("请输入商品金额（元）：");
    scanf("%d",&price);
    int change = amount - price;
    if (change >= 0) {
        printf("找您%d元。\n",change);
    }
    else {
        printf("%d块不够\n",amount);
    }
    return 0;
}