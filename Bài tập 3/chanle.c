#include <stdio.h>

int main() {
   int n;
   //gan gia tri n 
   printf("nhap n=");
   scanf("%d", &n);
   if (n % 2 == 0) 
   {printf("%d la so chan", n);
      //hien thi n la so chan
   } else {
      printf("%d la so le", n);
      //hien thi n la so le
      scanf("%d", &n);
      if (n !=0) {
        printf("n khong bang 0");
      } else {
        printf("n bang 0");
      }
   } 
   
   getchar();   
   return 1;
}
