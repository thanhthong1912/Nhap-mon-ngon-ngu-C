#include <stdio.h>

int main (){
  int a;
  //gan gia tri a
  printf("cac so le tu 1 den 20 tru so 5, 11, 15 la:");
  //hien thi ra man hinh 

  for (a=1; a<=20; a++){
    if (a%2){
      switch (a){
        case 5:
        case 11:
        case 15:
           break;
        default:
         printf ("\n %d",a);
      }
    }
  }
  return 0;
}
