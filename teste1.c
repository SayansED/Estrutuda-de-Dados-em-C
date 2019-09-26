#include<stdio.h>

void f1(int a){
	a = a + 10;
	printf("\nA dentro de F1: %d", a);
}

void f2(int *a){
	*a = *a + 10; //Endereco de a
	printf("\nA dentro de F2: %d", *a);
}

int main(){
	int a = 27;
	printf("\nA antes de F1: %d", a);
	f1(a); //Passagem por valor
	printf("\nA depois de F1: %d", a);
	f2(&a); //Passagem por referencia
	printf("\nA depois de F2: %d", a);
	
	//Passagem por referencia altera o conteudo
	
	return 0;
}
