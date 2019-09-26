#include<stdio.h>

void troca(int *a, int *b){
	int aux;
	aux = *b;
	*b = *a;
	*a = aux;
	
	/*
	aux = *a;
	*a = *b;    //Prof
	*b = aux;
	*/
	
	printf("\nO valor de a=%d e b=%d", *a, *b);
}

int main(){
	int a=5, b=7;
	printf("\nO valor de a=%d e b=%d", a, b);
	troca(&a, &b);
	
	return 0;
}
