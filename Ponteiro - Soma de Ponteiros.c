#include<stdio.h>
#include<stdlib.h>
void soma(int* n1, int n2){
	*n1=*n1+n2;
}

int main(){
    int n1,n2;
    scanf("%i %i",&n1,&n2);
    soma(&n1,n2);
	printf("Resultado da soma eh: %i\n",n1);
 	return 0;
}
