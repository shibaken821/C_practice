#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i;
	int a;


	printf("いつまで佩うか方を秘薦してください\n");
	scanf_s("%d",&a);

	for (i = 0; i <= a; i++){
		if (i == 0)
			printf("%d\n", i);
		else if (i % 3 == 0 && i % 5 != 0)
			printf("fizz\n");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("buzz\n");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("fizzbuzz\n");
		else
			printf("%d\n",i);
	}


	system("pause");
	return 0;
}