#include <stdio.h>
int main(){ 

//khai bao bien kieu int int a, b, c 

//hien thi ra man hinh 
printf("Nhap a =\n");
 //nhap so lieu tu ban phim 
scanf("%d", &a); 
//hien thi ra man hinh 
printf("Nhap b =\n"); 
//nhap so lieu tu ban phim 
scanf("%d", &b); 
//hien thi ra man hinh 
printf("Nhap c =\n"); 
//nhap so lieu tu ban phim 
scanf("%d", &c); 
if((a - c) < b && b < (a + c)) { 
printf("La 3 canh cua tam giac"); 

} else { 
printf("Khong phai la 3 canh cua tam giac"); 
}
return 0;
}
