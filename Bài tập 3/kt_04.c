#include<stdio.h>
int main(){
    int n;
    //gan gia tri a
    printf("hien thi tong cac chu so cua mot so nguyen n: ");
    for(n=1;n>0;n++){
      if(n%2){
        switch (n){
          case 0:
          break;
          default:
          printf("\n %d", n);
        }
      }
    }
    return 0;
}
