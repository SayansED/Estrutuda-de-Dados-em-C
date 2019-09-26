#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int i, soma = 0;
	for(i=0; i<argc; i++){
		soma =  soma + atoi(argv[i]);
	}
	printf("\n%d\n", soma);
	
	return 0;
}
