#include <stdio.h>
int main(){
int a,b;
//khai bao bien kieu float a, b
printf("Nhap vao so thuc thu nhat:\n"); 
scanf("%f",&a); 
printf("Nhap vao so thuc thu hai:\n"); 
scanf("%f",&b); 
//tinh tong float tong = a * b; 
//vong lap if cung dau if (tong > 0) 
printf("%0.1f va %0.1f cung dau", a, b); }
//vong lap else if trai dau else if (tong < 0) { 
printf("%0.1f va %0.1f trai dau", a, b);
}
return 0;
}
