#include <stdio.h>
int main (){
int n,fila,columna,constante=1,x;
printf("Dame el valor de un numero \t");
scanf("%d",&n);

x=n-1;

    for (fila=0;fila<n;fila++){
	    for(columna=0;columna<x;columna++){
		   printf(" ");
	}
	  x--;
	for(columna=0;columna<constante;columna++){
		printf("*");
	}
constante=constante+2;
printf("\n");
}

}

