#include <stdio.h>
#include <stdlib.h>
int main(void){
	//int x;
	//int y;
	//int z;
	//int i;
	int x , y , z , i;

	printf("Please \n");
	
	printf("整数１");
	scanf_s("%d\n",&x);

	printf("整数２");
	scanf_s("%d\n",&y);

	printf("整数３");
	scanf_s("%d\n",&z);
	
	i = x + y + z;
	
	printf("それらの和は%dです\n", i);
	system("pause");
	return 0;


}