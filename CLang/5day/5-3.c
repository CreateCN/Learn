//素数判断
#include <stdio.h>

int main() {
    int n;
    int isPrime = 1;
    scanf("%d",&n);

    for (int i = 2;i < n;i++) {
        if (n%i == 0) {
            isPrime = 0;
        }
    }

    if (isPrime == 1) {
        printf("是素数\n");
    } else {
        printf("不是素数\n");
    }
    



    return 0;
}
