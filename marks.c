#include<stdio.h>

int main(void){
	
	int n = 1;
	double h;
	
	while(n > 0){
		printf("\nEnter Marks : ");
		scanf(" %d", &n);
		h = (n/800)*100;
		printf("\nPercentage  : %F", h);
	}

	return 0;
}