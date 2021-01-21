#include<stdio.h>

int main(){
    int a[100];//khai bao a (chiec hop 100 ngan)
    int i,n;// khai bao i va n
    printf("nhap kich thuoc n = ");// hien thi ra man hinh 
    scanf("%d", &n);//nhap du lieu 
    for(i = 0; i < n; i++){
      printf("\n nhap phan tu a [%d] = ", i);
      scanf("%d", &a [i]);
  }
    printf(" mang a : ");
    for(i = 0; i < n; i++){ 
      printf("%d ", a[i]);
  }
  n = 3;
  int tong = 0;
  for(int j = 0; j < n; j++ ){
  tong = tong + a[j];
  }
  printf("\n tong : %d", tong);
  return 0;
}
