#include <stdio.h>

void br(void);
void ic(void);

int main(void){
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    return 0;
}

/**
 * �û���ӡ"Brazil, Russia"
 */
void br(void){
    printf("Brazil, Russia");
}

/**
 * ���ڴ�ӡ��India, China��
 */
void ic(void){
    printf("India, China");
}
