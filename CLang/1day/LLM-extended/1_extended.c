/*
 * 1.c 的扩展学习版本
 * 扩展点：
 *   1. 输入验证（scanf 返回值、负数、非数字）
 *   2. 自定义拥有金额（不再固定 100）
 *   3. 找零明细（按 50/20/10/5/1 元面额分解）
 *   4. 循环交易（支持多次计算，输入 q 退出）
 *   5. 函数封装（模块化设计）
 *   6. 边界处理（刚好够、不够、金额过大）
 */
#include <stdio.h>

/* 面额数组：从大到小排列，便于贪心分解 */
static const int DENOMS[] = {50, 20, 10, 5, 1};
static const int DENOM_COUNT = sizeof(DENOMS) / sizeof(DENOMS[0]);

/* 计算并打印找零的面额明细 */
void print_change_detail(int change) {
    if (change == 0) {
        printf("  刚好够，无需找零。\n");
        return;
    }
    printf("  找零明细：\n");
    int remaining = change;
    for (int i = 0; i < DENOM_COUNT; i++) {
        int n = remaining / DENOMS[i];
        if (n > 0) {
            printf("    %d 元 × %d 张\n", DENOMS[i], n);
            remaining -= n * DENOMS[i];
        }
    }
}

/* 处理一次交易：返回 1 表示继续，0 表示用户请求退出 */
int handle_transaction(void) {
    int price = 0;
    int paid  = 0;

    printf("\n请输入商品金额（元，输入 q 退出）：");
    if (scanf("%d", &price) != 1) {
        /* 输入不是数字，检查是否是退出指令 */
        char c;
        if (scanf("%c", &c) == 1 && (c == 'q' || c == 'Q')) {
            return 0;
        }
        printf("  输入无效，请输入数字。\n");
        /* 清空输入缓冲区，防止后续读取混乱 */
        while (getchar() != '\n') { }
        return 1;
    }

    if (price < 0) {
        printf("  金额不能为负数。\n");
        return 1;
    }

    printf("请输入您支付的金额（元）：");
    if (scanf("%d", &paid) != 1) {
        printf("  支付金额输入无效。\n");
        while (getchar() != '\n') { }
        return 1;
    }

    if (paid < 0) {
        printf("  支付金额不能为负数。\n");
        return 1;
    }

    if (paid < price) {
        printf("  支付金额不足，还差 %d 元。\n", price - paid);
    } else {
        int change = paid - price;
        printf("  找您 %d 元。\n", change);
        print_change_detail(change);
    }
    return 1;
}

int main(void) {
    printf("=== 找零计算器（扩展版）===\n");

    int keep_going = 1;
    while (keep_going) {
        keep_going = handle_transaction();
    }

    printf("感谢使用，再见！\n");
    return 0;
}