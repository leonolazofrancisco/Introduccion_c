#include <stdio.h>
int fibonacci(int x)
{
if(x==0)
{
	return 0;
}
else if(x==1)
{
	return 1;
}
else
{
	return fibonacci(x-1)+fibonacci(x-2);
 }
}

int main()
{
int y;
printf("Ingresa un numero ");
scanf("%d",&y);
printf("El fibonacci del numero eses %d\n",fibonacci(y));
return 0;
}

