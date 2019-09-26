#include<stdlib.h>
#include<stdio.h>

int le_vetor (int v[], int t){
	int i;
	printf("\nDigite %d valores para preencher o vetor: ", t);
	for(i=0; i<t; i++){
		printf("\nPosicao %d: ", i); scanf("%d", &v[i]);
	}
}

void mostra_vetor(int *v, int t){
	int i;
	printf("\nO vetor");
	for(i=0; i<t; i++){
		printf("\n%d", v[i]);
	}
	printf("\nAcabou o vetor");
}

int main(){
	int *v, t;
	printf("\nDigite o tamanho: "); scanf("%d", &t);
	v = (int *) malloc (t * sizeof(int));
	//v = (int *) malloc (t, sizeof(int));
	le_vetor(v, t);
	mostra_vetor(v, t);
	
	return 0;
}
