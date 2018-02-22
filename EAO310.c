#include <stdio.h>

int main ( )
{
	
	int _a, _b, _c, maior;
	
	maior 	= 0;
	_a 		= 10;
	_b 		= 10;
	
	scanf("%d%d%d", &_a, &_b, &_c);
	
	
	// verificar qual numero maior
	
	if( _a > _b ){

		if( _a > _c )
			maior = _a;
		
	}


	if( _b > _a ){

		if( _b > _c )
			maior = _b;
		
	}
	
	
	if( _c > _a ){

		if( _c > _b )
			maior = _c;
					
	}
	
	
	// valores iguais
	if( _a == _b ){
		if( _b == _c )
			maior = _a;
	}
		
					
					
	printf( "\tMaior numero entre (%d, %d, %d) eh: => %d", _a, _b, _c, maior );
	
	return 0;
}
