#include <stdio.h>

int main(){
	int n, i, c, space;

	printf("\nNhap n: ");
  scanf("%d", &n);

	for (i=1 ; i<=n ; i++)
  	printf(" ");
  {
 		for (space=n-1 ; space>=i ; space--){
       printf("*");
		}
		for (c=1 ; c<=i*2 ; c++){
     printf(" \n");
 		}
  	}
  return 0;
}
