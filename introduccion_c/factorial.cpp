#include <stdio.h>
int main (){
int numero;
int fac =1;
int i;
printf("Inserta un numero:");
scanf("%d", &numero);
i=numero;
while (i>0) fac*=i--;
printf("%d El factorial de este numero es: %d\n", numero,fac);
return 0;
}

