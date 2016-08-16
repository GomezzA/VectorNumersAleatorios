#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#define t 50
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int x,n, vec[t], par=0, ipar=0, neg=0, mayor=vec[0], menor=vec[0];
	
	do{
		printf("\nNumero de elementos del vector: ");
		scanf("\n%d", &n);
	}while(n<5||n>50);
	
	
	srand(time(0));
	

	for(x=0;x<n;x++){
	
		vec[x]=-15+rand()%(100+15)-15;
		
		if(vec[x]%2==0){
			par++;
		}
		if(vec[x]%2!=0){
			ipar++;
		}
		if(vec[x]<0){
			neg++;
		}
		if(vec[x]>mayor){
			mayor=vec[x];
		}
		if(vec[x]<menor){
			menor=vec[x];
		}
	}
	for(x=0;x<n;x++){
		
		printf("\n %d", vec[x]);
	}
	printf("\n\nHay %d numeros pares", par);
	printf("\nHay %d numeros impares", ipar);
	printf("\nHay %d numeros negativos", neg);
	printf("\nEl numero mayor es %d", mayor);
	printf("\nEl numero menor es %d", menor);
	return 0;
}

