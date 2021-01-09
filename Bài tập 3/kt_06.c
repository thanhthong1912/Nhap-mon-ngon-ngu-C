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

#include<stdio.h>
int main(){
  /*
  h = 4 4:4 hang
  hang 1: 1 sao 3 khoang trong
  hang 2: 3 sao 2 khoang trong
  hang 3: 5 sao 1 khoang trong
  hang 4: 7 sao 0 khoang trong
  
  h = 3 3:3 hang
  hang 1: 1 sao 2 khoang trong
  hang 2: 3 sao 1 khoang trong
  hang 3: 5 sao 0 khoang trong
  
  h = 2  2:2 hang
  hang 1: 1 sao 1 khoang trong
  hang 2: 3 sao 0 khoang trong
  */
return 0;
}
