#include <stdio.h>
int main(){
//khai bao bien kieu float a, b
//hien thi ra man hinh so 
printf("Nhap vao so thuc thu nhat:\n"); 
//nhap mot so ra tu ban phim 
scanf("%f",&a); 
//hien thi ra man hinh 
printf("Nhap vao so thuc thu hai:\n"); 
//nhap mot so tu ban phim 
scanf("%f",&b); 
//tinh tong float tong = a * b; 
//vong lap if cung dau if (tong > 0) { 
printf("%0.1f va %0.1f cung dau", a, b); }
//vong lap else if trai dau else if (tong < 0) { 
printf("%0.1f va %0.1f trai dau", a, b); 
}
return 0;
}
