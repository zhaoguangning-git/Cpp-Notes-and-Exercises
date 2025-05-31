#include<stdio.h>

float covInchToCen(float inch); /* 函数原型声明 */

int main(void) {
    float inch;
    float cen;
    
    printf("请输入英寸：");
    scanf("%f", &inch);
    
    cen = covInchToCen(inch);
    printf("%.1f 英寸对应于 %.1f 厘米\n", inch, cen);
    
    return 0;
}

/* 将英寸转换为厘米的函数 */
float covInchToCen(float inch) {
    return inch * 2.54;
}
