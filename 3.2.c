#include <stdio.h>
int main(void){
    int ascii;

    // ��ʾ����һ��ASCII��ֵ
    printf("Enter an ASCII code:");
    scanf("%d", &ascii);
    // ��ӡ������ַ�
    printf("%d is the ASCII code for %c.\n", ascii, ascii);
    return 0;
}
