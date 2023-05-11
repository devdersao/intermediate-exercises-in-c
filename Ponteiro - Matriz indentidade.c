#include<stdio.h>
#include<stdlib.h>
void rg (int *numero){
	int i=0,j=0,m[*numero][*numero];
	if((*numero<0) || (*numero>10)) {
		printf("erro!\n");
	}
	for(i=0;i<*numero;i++){
		for(j=0;j<*numero;j++){
			if(i == j){
				m[i][j] = 1;	
			}else{
				m[i][j] = 0;
			}
		}
	}
	for(i=0;i<*numero;i++){
		for(j=0;j<*numero;j++){
			printf("%i ",m[i][j]);
		}
		printf("\n");
	}
}
int main (){
	int numero;
	scanf("%i",&numero);
	rg(&numero);
	return 0;
}
