#include <stdio.h>

int main(void){
  int n, sum = 0, i;
  printf ("nhap gia tri n :");
  scanf ("%d",&n);
  for(i = 1; i< n; i++){
    if (n % i ==0){
      sum = sum + i;
    }
}
    if(sum ==n){
      printf("%d la so hoan hao \n", n);
    }else{
      printf("%d khong phai la so hoan hao \n", n);
    }
    return 0;
}
