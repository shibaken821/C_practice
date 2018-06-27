#include <stdio.h>
#include <stdlib.h>
int main(void){
	int x;
	int y;
	int z;

	printf("３つの屁方を秘薦してください\n");
	
	printf("屁方１");
	scanf_s("%d\n",&x);

	printf("屁方２");
	scanf_s("%d\n",&y);

	printf("屁方３");
	scanf_s("%d\n",&z);
	
	int i = x + y + z;
	
	printf("それらの才は%dです\n", i);
	system("pause");
	return 0;


}