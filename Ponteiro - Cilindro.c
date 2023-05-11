#include<stdio.h>
#include<stdlib.h>
float pi=3.14;
float Area(float raio){
	float resarea=0;
	resarea=pi*(raio*raio);
	
	return resarea;
}
float Volume(float resarea,float altura){
	float volume;
	volume = resarea*altura;
	return volume;
	
}
int main(){
	float raio,altura,resarea,volume;
	scanf("%f %f",&raio,&altura);
	resarea = Area(raio);
	if((raio==0.0) || (altura==0.0)){
	printf("Impossivel calcular!\n");
		return 0;
	}
	printf("Area do Cilindro: %.2f\n",resarea);
    volume = Volume(resarea,altura);
    printf("Volume do Cilindro: %.2f\n",volume);
	return 0;
}

