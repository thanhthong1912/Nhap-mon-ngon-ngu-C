#include <stdio.h>
 
int main(){
  int a, b, c; //khai bao 3 bien a,b,c
  //nhap a,b,c
  printf("Nhap so a: "); 
  scanf("%d", &a);
  printf ("Nhap so b: "); 
  scanf ("%d",&b);
  printf ("Nhap so C: "); 
  scanf ("%d",&c);
  if (a >= b && a >= c){
    //hien thi ra man hinh a la so lon nhat
    printf("So lon nhat trong 3 so la:\n a = %d", a);
}else if (b >= a && b >= c){
    //hien thi ra man hinh b la so lon nhat
    printf("So lon nhat trong 3 so la:\n b = %d", b);
}else{
    //hien thi ra man hinh c la so lon nhat
    printf("So lon nhat trong 3 so la:\n c = %d", c);
    }
    return 0;
}
