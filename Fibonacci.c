#include <stdio.h>

int fibonacci_term(int index) {
	int term[index + 1];	//To save memory.
	for (int time = 0 ; time < index + 1; time++) {
		if(time == 0 || time == 1) {
			term[time] = 1;
		} else {
			term[time] = term[time - 1] + term[time - 2];
		}
	}
	return term[index];
}

int main(void){
	
	printf("answer:%d\n",fibonacci_term(20));

	return 0;
}