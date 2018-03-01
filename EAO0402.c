#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(){
	
	int _num_1 = 0, _num_2 = 0, menor = 0, maior = 0, count = 1, multi = 1;
	
	printf("\n\t EAO\n\n");
	
	printf("Entre com 1o numero: \n");
	scanf("%d",&_num_1);
	
	printf("Entre com 2o numero: \n");
	scanf("%d",&_num_2);
	
	menor = ( _num_1 > _num_2 ) ? _num_2 : _num_1;
	maior = ( _num_1 > _num_2 ) ? _num_1 : _num_2;
	
	while( multi < maior ) {
		multi = menor * count;
		if(multi < maior)
			printf("\n %d", multi);
		
		count++;		
	}
	
}