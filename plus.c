#include <stdio.h>
#include <stdlib.h>
int main(void){
	int x;
	int y;
	int z;
	int i;

	printf("���Ĥ��������������Ƥ�������\n");
	
	printf("������");
	scanf_s("%d\n",&x);

	printf("������");
	scanf_s("%d\n",&y);

	printf("������");
	scanf_s("%d\n",&z);
	
	i = x + y + z;
	
	printf("�����κͤ�%d�Ǥ�\n", i);
	system("pause");
	return 0;


}