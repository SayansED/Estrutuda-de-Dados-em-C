// Gerar vetores ramdomicos de diversos tamanhos e testar o algoritmo bubblesort

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void gera_vetor(int v[], int n){
	int i;
	for(i=0; i<n; i++)
		v[i] = rand();
}

void mostra_vetor(int v[], int n){
	int i;
	printf("\n");
	for(i=0; i<n; i++){
		printf("%d   ", v[i]);
	}
	printf("\n");
}

void bubble(int v[], int n){
	int i, j, aux;
	for(i=1; i<n; i++){
		for(j=0; j<n-i; j++){
			if(v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;	
			}
		}
	}
}

int main(){
	int n, ini, fim, *v;
	printf("\nDigite o tamnho do vetor: "); scanf("%d", &n);
	v = (int *) malloc (n * sizeof(int));
	srand(time(0));
	gera_vetor(v, n);
	printf("\nVetor original:");
	mostra_vetor(v, n);
	bubble(v, n);
	printf("\nVetor ordenado:");
	mostra_vetor(v, n);
	
	return 0;
}
