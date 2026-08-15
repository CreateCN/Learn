//不同i初始值的不同
#include <stdio.h>

int main() {
    int i;

    for (i = 0;i < 5;i++) {
        printf("%d",i);
    }
    printf("\n最后i=%d\n",i);

    for (i = 1;i <= 5;i++) {
        printf("%d",i);
    }
    printf("\n最后i=%d\n",i);

    return 0;
}
