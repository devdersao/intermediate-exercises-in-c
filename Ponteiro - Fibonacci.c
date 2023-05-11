#include<stdio.h>
#include<stdlib.h>
// 0 1 1 2 3 5 8 13 21 ...
int Fibonate(int valor){
	if( valor < 2){
		return 1;	
	}else{
		return Fibonate(valor-1) + Fibonate (valor-2);
	}
}
int main(){
	int Fib,resultado=0;
	scanf("%i",&Fib);
	resultado = Fibonate(Fib-1);
	printf("%i posicao da sequencia = %i\n",Fib,resultado);
	return 0;
}
