#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char msg1[100],msg2[100];
	int tam;
		FILE *p = fopen("texto1.txt","r");
	if(!p){
		printf("erro\n");
		exit(0);
	}
		FILE *t = fopen("texto2.txt","r");
	if(!t){
		printf("erro\n");
		exit(0);
	}
	while((fgets(msg1,100,p))&&(fgets(msg2,100,t))){
		tam = strlen(msg1)-1;
		if(msg1[tam] == '\n'){
			msg1[tam] = '\0';
		}
		tam = strlen(msg2)-1;
		if(msg2[tam] == '\n'){
			msg2[tam] = '\0';
		}
		printf("%s - ",msg1);
		printf("%s\n",msg2);
	}
	
	fclose(p);
	fclose(t);
	return 0;
}
