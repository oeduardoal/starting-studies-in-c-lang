#include <stdio.h>

int main(){

  int a = 1, num = 0;
  
  scanf("%d", &num);
  
  while( a < num ){
      printf("O %d eh par\n", a*2);
      a++;
  }
  return 0;
  
}