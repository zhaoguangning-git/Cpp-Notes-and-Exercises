#include <stdio.h>
int main(void){
    // 1Ʒ�ѵ���2��
    float cup_per_pint = 2;
    // 1������8��˾
    float oz_per_cup = 8;
    // 1��˾����2������
    float tbs_per_oz = 2;
    // 1�����׵���3����
    float tsp_per_tbs = 3;

    float num_cup;
    // ��ʾ�û����뱭��
    printf("Enter the num of Cup:");
    scanf("%f", &num_cup);
    // ��Ʒ����ʾ����
    printf("%g(cup) of pint is %g.\n", num_cup, num_cup / cup_per_pint);
    // �԰�˾��ʾ����
    printf("%g(cup) of ounce is %g.\n", num_cup, num_cup * oz_per_cup);
    // ��������ʾ����
    printf("%g(cup) of tablespoon is %g.\n", num_cup, num_cup * oz_per_cup * tbs_per_oz);
    // �Բ�����ʾ����
    printf("%g(cup) of teaspoon is %g.\n", num_cup, num_cup * oz_per_cup * tbs_per_oz * tsp_per_tbs);

    return 0;
}
