// example_15_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//以表格的形式输出一个函数的值，程序使用了嵌套的宏

#include <stdio.h>
#include<math.h>
#define PI 3.141593
#define STEP (PI/8)
#define AMPLITUDE 1.0
#define ATTENUATION 0.1

#define DF(x) exp(-ATTENUATION*(x))
#define FUNC(x) (DF(x)*AMPLITUDE*cos(x))

#define STR(s) #s
#define XSTR(s) STR(s)

int main()
{
    double x = 0.0;
    printf("\nFUNC(x)=%s\n", XSTR(FUNC(x)));
    printf(("\n %10s %25s\n", "x", STR(y = FUNC(x))));
    printf("…………………………………………………………………………\n");
    for (; x < 2 * PI + STEP / 2; x += STEP)
    {
        printf("%15f %20f\n", x, FUNC(x));
    }
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
