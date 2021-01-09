#include <stdio.h>

int main(){
	int n, i, c, trong;

	printf("\n Nhap n: ");
  scanf("%d", &n);

	  for (i = 1 ; i <= n ; i++)
  {
 		for (trong=n-1 ; trong>=i ; trong--){
         	printf(" ");
		} 
		for (c = 1 ; c <= i*2 ; c++){
          printf(" * ");
 		}printf("\n");
  	}
  return 0;
}

============

#iclude <stdio.h>
int main (){
/*
h 4:4 hang
hang 1: 1 ngoi sao 6 khoanng trang
hang 2: 3 ngoi sao 4 khoanng trang
hang 3: 5 ngoi sao 2 khoanng trang
hang 4: 7 ngoi sao 0 khoanng trang

h 3:3 hang
hang 1: 1 ngoi sao 4 khoanng trang
hang 2: 3 ngoi sao 2 khoanng trang
hang 3: 4 ngoi sao 0 khoanng trang

h 2:2 hang 
hang 1: 1 ngoi sao 2 khoanng trang
hang 2: 3 ngoi sao 0 khoanng trang
*/


return 0;
}
