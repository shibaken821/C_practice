#include <stdio.h>
#include <stdlib.h>

int main(void){

	int i;
	int v[40];

	for (i = 0; i < 40; i++){
		if (i == 0 || i == 1)
			v[i] = i;
		else
			v[i] = v[i - 1] + v[i - 2];
		printf("%d\n",v[i]);
	}

	system("pause");
	return 0;
}