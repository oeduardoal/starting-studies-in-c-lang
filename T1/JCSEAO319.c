#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

int main() {

	int a = 0, b = 0;
	printf("\nDigite o 1o número: ");	
	scanf(" %d",&a);
	printf("\nDigite o 2o número: ");	
	scanf(" %d",&b);
	
	int valid = 1;

	if( ((a > -20 && a <= -10 ) || ( a > 0 && a <= 10 ) || ( a > 50 ) ) && ( ( b > -50 && b <= -20 ) || ( b >= 0 && b <= 10 ) || ( b > 20 && b <= 50 ) ) )
		valid = 0;
	else if( ((a < -20 && a >= -10 ) || ( a < 0 && a >= 10 ) || ( a < 50 ) ) && ( ( b < -50 && b >= -20 ) || ( b <= 0 && b >= 10 ) || ( b < 20 && b >= 50 ) ) )
		valid = 0;

	if( valid )
		printf("Valores digitados são válidos: (%d) : (%d)", a,b);
	else
		printf("Valores digitados não são válidos: (%d) : (%d)", a,b);

	return 0;
}
