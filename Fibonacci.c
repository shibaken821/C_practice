#include <stdio.h>
#include <stdlib.h>

#define NUMBER 40

/*int function_t(int value) {
	int a;

	return a;
}*/

int fibonacci(int a){
	int v[NUMBER];
	int i=a;
	for (i = 0; i < NUMBER; i++){
		if (i == 0 || i == 1){
			v[i] = i;
		}else {
			v[i] = v[i - 1] + v[i - 2];
		}
		return v[i];

	}
}

	
int main(void){
	int time;
	
	for (time = 0; time < NUMBER; time++){
		printf("%d\n", fibonacci(time));
	}

	system("pause");
	return 0;
}