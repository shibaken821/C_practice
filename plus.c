#include <stdio.h>
#include <stdlib.h>
int main(void){
	//int x;
	//int y;
	//int z;
	//int i;
	int x , y , z , i;

	printf("Please enter 3 numbers\n");
	
	printf("number1:");
	scanf_s("%d\n",&x);

	printf("number2:");
	scanf_s("%d\n",&y);

	printf("number3:");
	scanf_s("%d\n",&z);
	
	i = x + y + z;
	
	printf("The sum of the three numbers is %d\n", i);
	system("pause");
	return 0;


}