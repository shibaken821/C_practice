#include <stdio.h>
#include <stdlib.h>
int main(void){
	int x;
	int y;
	int z;

	printf("���Ĥ��������������Ƥ�������\n");
	
	printf("������");
	scanf_s("%d\n",&x);

	printf("������");
	scanf_s("%d\n",&y);

	printf("������");
	scanf_s("%d\n",&z);
	
	int i = x + y + z;
	
	printf("�����κͤ�%d�Ǥ�\n", i);
	system("pause");
	return 0;


}