#include<stdlib.h>
#include<stdio.h>

int main(){
	//int v[10000000];  para este compilador e SO, não roda
	//Solução: alocação dinâmica
	
	int *v1, *v2;
	
	v1 = (int *)malloc (1000000 * sizeof(int));
	printf("\nEndereco inial do bloco v1: %p\n", v1);
	
	v2 = (int *)malloc (1000000 * sizeof(int));
	printf("\nEndereco inial do bloco v2: %p\n", v2);
	
	free(v1);
	free(v2);
	
	return 0;	
}
