#include <stdio.h>

int main(void){
  int n, i;
  float tong = 0;
  printf ("nhap gia tri n :");
  scanf ("%d",&n);
  for(i = 1; i< n; i++){
  tong += (float)i / i;
}
    printf("1 + 1/2 + 1/3 + ... + 1/n = %0.1f ", tong);
    return 0;
}
  
