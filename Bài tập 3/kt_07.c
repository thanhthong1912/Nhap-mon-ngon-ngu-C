#include <stdio.h>
int main(){ 

//khai bao bien kieu int int a, b, c 
int a,b,c;

//hien thi ra man hinh 
printf("Nhap a =\n");
 //nhap so lieu tu ban phim 
scanf("%d", &a); 
printf("Nhap b =\n"); 
scanf("%d", &b); 
printf("Nhap c =\n"); 
scanf("%d", &c); 
if((a - c) < b && b < (a + c)) { 
printf("La 3 canh cua tam giac"); 

} else { 
printf("khong phai la 3 canh cua tam giac"); 
}
return 0;
}
