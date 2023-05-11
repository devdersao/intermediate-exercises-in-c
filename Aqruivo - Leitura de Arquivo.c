#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
	char msg[100];
	FILE *p = fopen("texto.txt","r");
	if(!p){
		printf("erro\n");
		exit(0);
	}
	
	while(fgets(msg,100,p) != NULL){
		printf("%s",msg);
	}
		
	fclose(p);
	return 0;
}
