#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
main ()
{
int minutos=0,segundos=0;
printf("\nCronometro parcial de 10 minutos\n\n");
while(minutos<=59)
{
	segundos=0;
	while(segundos<=59)
	{
		printf("\nPassados %d minutos e %d segundos",minutos,segundos);
		segundos=segundos+1;
	}
	minutos=minutos+1;
	system("pause");
}
system("pause");
}
