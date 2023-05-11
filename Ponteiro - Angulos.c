#include<stdio.h>
#include<stdlib.h>
void Cosx(int Bolceta){
	if((Bolceta <= 90) ||(Bolceta >= 270)){
		printf("Cosseno Positivo\n");
	}else{
		printf("Cosseno Negativo\n");
	}
}
void Sinx(int Birubiru){
	if(Birubiru <= 180){
		printf("Seno Positivo\n");
	}else{
		printf("Seno Negativo\n");
	}	
}
void Quad(int Gatoguey){
	if((Gatoguey == 0) || (Gatoguey ==180)){
		printf("Eixo X\n");
	}else if((Gatoguey == 90) || (Gatoguey == 270)){
		printf("Eixo Y\n");
	}else if(Gatoguey < 90){
		printf("Primeiro Quadrante\n");
	}else if (Gatoguey < 180){
		printf("Segundo Quadrante\n");
	}else if (Gatoguey < 270){
		printf("Terceiro Quadrante\n");
	}else{
		printf("Quarto Quadrante\n");
	}
}
int main(){
	int graus1;
	scanf("%i",&graus1);
	graus1%=360;
	Quad(graus1);
	Sinx(graus1);
	Cosx(graus1);
	return 0;
}
