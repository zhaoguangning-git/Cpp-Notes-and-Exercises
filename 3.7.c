#include <stdio.h>
int main(void){
    float inch = 2.54;
    float height;
    // ��ʾ�û�������ߣ���λ��Ӣ�磩
    printf("Enter the num of height (in):");
    scanf("%f", &height);
    // ���㲢��ӡ��ߣ���λ�����ף�
    printf("%.2f(in) height is %.2f(cm).\n", height, height * inch);

    return 0;
}
