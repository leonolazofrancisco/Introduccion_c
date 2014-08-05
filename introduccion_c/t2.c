#include <stdio.h>
int main (){
int n=5,fila,columna;
 for (fila=5;fila>0;fila--){
	for(columna=(n-fila);columna>0;columna--){
		printf(" ");
	}
	for(columna=0;columna<fila;columna++){
		printf("*");
	}
printf("\n");
}
}
