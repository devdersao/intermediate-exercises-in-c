#include<stdio.h>
void soma(int *entrada){
	int w=0,i;
	for(i=0;i<=*entrada;i++){
		w+=*entrada-i;
	}
		printf("Soma: %i",w);
}

int main(){
	int numero;
	scanf("%i",&numero);
	soma(&numero);
	return 0;
}

