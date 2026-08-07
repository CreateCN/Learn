//浮点数
/*
浮点计算在程序中很常见，此时必须要保证浮点数正常，否则会导致异常
*/
#include <stdio.h>

int main() {
    //方法1：计算时取浮点数
    int inch1;
    int foot1;

    printf("1请分别输入身高的英尺和英寸，如输入\"5 7\"表示5英尺7英寸：");

    scanf("%d %d",&foot1,&inch1);

    printf("1身高是%f米。\n",((foot1 + inch1 / 12.0)* 0.3048));

    //方法2：定义变量时使用浮点数
    double inch2;
    double foot2;

    printf("2请分别输入身高的英尺和英寸，如输入\"5 7\"表示5英尺7英寸：");

    scanf("%lf %lf",&foot2,&inch2);
    /*
    用lf不用f的原因：
    double类型使用了8字节内存，但在使用f时只会写入4字节内存造成脏数据，
    且scanf不会自动识别（指针传递），只有printf会自动识别（值传递）
    口诀：`scanf` 分得细，`printf` 不分家。
    */
    printf("2身高是%f米。\n",((foot2 + inch2 / 12)* 0.3048));
}