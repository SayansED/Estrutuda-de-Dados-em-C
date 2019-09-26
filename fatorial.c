#include<stdio.h>

float fat(int n){
	if(n==0 || n==1)
		return 1;
	return n * fat(n-1);
}

int main(){
	 int i=5;
	 for(i=0; i<=40; i++)
	 	printf("Fatorial de %d = %.0f\n", i, fat(i));
	 
	 return 0;
}
