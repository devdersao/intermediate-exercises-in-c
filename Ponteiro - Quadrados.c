#include<stdio.h>
void quadrado(int *entrada){
	*entrada=(*entrada)*(*entrada);
}
int main(){
	int numero;
	scanf("%i",&numero);
	quadrado(&numero);
	printf("Quadrado: %i\n",numero);
	return 0;
}
