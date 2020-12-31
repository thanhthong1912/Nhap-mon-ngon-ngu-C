#include <stdio.h>

int main(void) {
 int n;
 //khai bao bien n
 printf ("nhap n =");
 scanf("%d",&n);
  //khai bao bien//
  if (n == 1) {
    printf("one");}
  else if(n == 2){
    printf("two");}
  else if(n == 3){
    printf("three");}
  else if(n == 4){
    printf("four");}
  else if(n == 5){
    printf("five");}
  else if(n == 6){
    printf("six");}
  else if(n == 7){
    printf("seven");}
  else if(n == 8){
    printf("eight");}
  else if(n == 9){
    printf("nine");}
    //neu gia tri duoc nhap la 1,2,3,4... thi xuat ra man hinh one,two,three...
    else{
      printf("greater than 9");
    //khac nhu tren, neu gia tri nhap lon hon 9 thi hien thi ra man hinh "greater than 9"
    }

  
return 0;
}
