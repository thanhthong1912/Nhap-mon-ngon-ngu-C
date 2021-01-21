#include<stdio.h>

int main(){
    int a[100];//khai bao a (chiec hop 100 ngan)
    int i,n;// khai bao i va n
    printf(" Nhap kich thuoc n = ");// hien thi ra man hinh 
    scanf("%d", &n);//nhap du lieu 
    for(i = 0; i < n; i++){
      printf("\n Nhap phan tu a [%d] = ", i);
      scanf("%d", &a [i]);
  }
  //xuat ra mang
    printf (" \n");
    printf(" Mang a : ");
    for(i = 0; i < n; i++){ 
      printf("%d ", a[i]);
  }
  //tinh tong cac so chan
  int tongchan = 0;
  for(int j = 0; j < n; j++ ){
    if(a[j] % 2 == 0)
      tongchan = tongchan + a[j];
  }
  printf (" \n");
  printf("\n Tong cac so chan : %d", tongchan);
{
  //dem cac so chan
  int demchan = 0;
  for (int k = 0; k < n; k++)
  if(a[k] % 2 == 0 && a[k] != 0)
    demchan = demchan + 1;
    printf (" \n");
    printf(" \n So cac so chan: %d", demchan);
}
//tinh tong cac so le
int tongle = 0;
  for(int j = 0; j < n; j++ ){
    if(a[j] % 2 == 1)
      tongle = tongle + a[j];
  }
  printf (" \n");
  printf("\n Tong cac so le : %d", tongle);
{
  //dem cac so le
  int demle = 0;
  for (int l = 0; l < n; l++)
  if (a[l] % 2 == 1 && a[l] != 0)
    demle = demle + 1;
    printf (" \n");
    printf("\n So cac so le : %d", demle);
}

  return 0;
}
