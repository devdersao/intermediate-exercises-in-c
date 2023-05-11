#include<stdio.h>
#include<stdlib.h>
void narnia(int numeros[4]){
	int i=0,j=0,aux=0;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(numeros[i] > numeros[j]){
				aux = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = aux;
			}
		}
	}	
}
int main (){
	int i=0,numeros[4];
	for(i=0;i<5;i++){
		scanf("%i",&numeros[i]);
	}	
	narnia(numeros);
	for(i=0;i<5;i++){
		printf("%i ",numeros[i]);
	}
	return 0;
}
