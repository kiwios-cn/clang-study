
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;
    int input_status; // 用于存储scanf的返回值
    double buffer; // 用来临时存储非整数输入

    printf("请输入一个整数: ");
    while (1) { // 开始一个无限循环，直到得到正确的输入为止
        input_status = scanf("%d", &num); // 尝试读取一个整数
        printf("%d\n",input_status);
        if (input_status == 1) { // 如果成功读取了一个整数
            break; // 跳出循环
        }
        else { // 如果输入不是整数
            // 清除错误输入
            while (scanf("%lf", &buffer) != EOF && buffer != 0.0) {
                // 这里尝试读取任何可能的小数并忽略它们
            }
            printf("错误：您输入的是小数而不是整数，请重新输入一个整数: ");
        }
    }

    printf("您输入的整数是: %d\n", num);
    return 0;
}
