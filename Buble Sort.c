#include<stdio.h>
#include<stdlib.h>
int main(){
	int *vetor,aux,i=0,j,n;
	scanf("%i",&n);
	vetor = (int*)malloc(sizeof(int)*n);
	while(i<n){
		scanf("%i",&vetor[i]);
		i++;
	}
		printf("Antes:\n");
	for(i=0;i<n;i++){
		printf("%i ",vetor[i]);	
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(vetor[j]>vetor[j+1]){
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;
			}
		}
	}
	printf("\nDepois:\n");
	for(i=0;i<n;i++){
		printf("%i ",vetor[i]);
	}
	
	
	
	return 0;
}
