#include <stdio.h>
void display(int* a)
{
	printf("\n");
	for(int i = 0 ; i < 10; ++i){
		printf("%3d", a[i]);
		a[i] = i;
	}

   }
int main(){
	int a[10] = {0};
	
	display(a);
	printf("\nhbhjb");

	for(int i = 0 ; i < 10; ++i){
		printf("%3d", a[i]);
	}

	return 0;
}