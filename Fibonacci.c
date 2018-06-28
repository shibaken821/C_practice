#include <stdio.h>
#include <stdlib.h>

#define NUMBER 40

/*int function_t(int value) {
	int a;

	return a;
}*/

int main(void){
	
	//int a = function_t(3);
	
	int i;
	int v[NUMBERE];

	for (i = 0; i < NUMBERE; i++){
		if (i == 0 || i == 1) {
			v[i] = i;
		} else {
			v[i] = v[i - 1] + v[i - 2];
		}
		printf("%d\n",v[i]);
	}

	system("pause");
	return 0;
}