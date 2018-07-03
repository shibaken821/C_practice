#include <stdio.h>
#include <stdlib.h>

#define NUMBER 40

/*int function_t(int value) { 
	int a;

	return a;
}*/

int fibonacci(int a){	//What's 'a' ? Please add correct name.
	int v[NUMBER];
	//int i = a;	//Dont need it. No mean.
	if (a == 0 || a == 1) {
		v[a] = a;
	} else {
		v[a] = v[a - 1] + v[a - 2];
	}
	return v[a];
}

	
int main(void){
	//int time;
	
	for (int time = 0; time < NUMBER; time++){
		printf("%d\n", fibonacci(time));	//Please research "Stack Memory".
	}

	system("pause");
	return 0;
}