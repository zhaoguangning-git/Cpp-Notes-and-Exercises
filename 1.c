#include<stdio.h>

float covInchToCen(float inch); /* ����ԭ������ */

int main(void) {
    float inch;
    float cen;
    
    printf("������Ӣ�磺");
    scanf("%f", &inch);
    
    cen = covInchToCen(inch);
    printf("%.1f Ӣ���Ӧ�� %.1f ����\n", inch, cen);
    
    return 0;
}

/* ��Ӣ��ת��Ϊ���׵ĺ��� */
float covInchToCen(float inch) {
    return inch * 2.54;
}
