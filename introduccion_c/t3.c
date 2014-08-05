#include <stdio.h>
int main (){
int n=5,fila ,columna;
 for (fila=0;fila<n;fila++){
	for(columna=(n-fila);columna>0;columna--){
		printf(" ");
	}
	for(columna=0;columna<=fila;columna++){
		printf("*");
	}
printf("\n");
}
}
