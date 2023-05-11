#include<stdio.h>
int fatorial(int fatorar){
	if(fatorar <=1 ){
		return 1;		
	}else{
		return fatorial(fatorar-1)*fatorar;
	}
}
int main(){
	int numero,resultado;
	scanf("%i",&numero);
	resultado = fatorial(numero);
	printf("%i! = %i\n",numero,resultado);
	return 0;
}
