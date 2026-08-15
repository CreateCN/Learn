# C 语言学习记录

个人 C 语言练习仓库，按学习天数整理。当前已完成第 1 至第 5 天的练习，代码位于 [`CLang/`](CLang/) 目录。

## 学习进度

| 天数 | 记录日期 | 主题 | 当天记录 |
| --- | --- | --- | --- |
| Day 1 | 2026-08-05 | 标准输入输出、变量、条件判断与反汇编入门 | [`CLang/1day/README.md`](CLang/1day/README.md) |
| Day 2 | 2026-08-07 | 浮点数、表达式、时间差和变量交换 | [`CLang/2day/README.md`](CLang/2day/README.md) |
| Day 3 | 2026-08-09 | 关系运算、复合赋值、自增自减与分支语句 | [`CLang/3day/README.md`](CLang/3day/README.md) |
| Day 4 | 2026-08-10 | `while`、`do-while` 循环及循环练习 | [`CLang/4day/README.md`](CLang/4day/README.md) |
| Day 5 | 2026-08-15 | `for` 循环、阶乘和素数判断 | [`CLang/5day/README.md`](CLang/5day/README.md) |

> 日期来自对应 Git 提交记录，学习时长未记录。

## 目录结构

```text
.
├── README.md
└── CLang/
    ├── 1day/                 # 输入输出、条件判断与反汇编
    ├── 2day/                 # 浮点数、表达式与变量
    ├── 3day/                 # 分支语句与运算符
    ├── 4day/                 # while / do-while 循环
    └── 5day/                 # for 循环与素数判断
```

## 构建与运行

在对应的学习日目录中编译源文件。示例：

```bash
cd CLang/5day
gcc -std=c11 -Wall -Wextra 5-1.c -o 5-1
./5-1
```

编译产生的可执行文件已由 `.gitignore` 忽略。

## 环境与资料

- 操作系统：Linux（Ubuntu26.04LTS）（x86-64）
- 编译器：GCC
- 调试与分析：GDB、ImHex
- 编辑器：VS Code
- 教程：哔哩哔哩翁恺 C 语言课程
- 参考：[cppreference C](https://zh.cppreference.com/w/c)、[GCC 文档](https://gcc.gnu.org/onlinedocs/)
