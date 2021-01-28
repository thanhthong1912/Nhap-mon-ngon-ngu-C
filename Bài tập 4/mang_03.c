#include<stdio.h>

void Nhap_pt_mang(int a[]);
int n;
void Hien_thi_pt_mang(int a[]);
void Hien_thi_tong_chan(int a[]);
int a[100];
int i;
void Dem_chan_le_0(int a[]);

 //khoi ham main
int main(){
  printf("Nhap n = ");
  scanf("%d", &n);
  int a[n];
  Nhap_pt_mang(a);
  Hien_thi_pt_mang(a);
  Hien_thi_tong_chan(a);
  Dem_chan_le_0(a);
  return 0;
}
//dinh nghia ham

//dinh nghia ham void nhap_pt_mang
void nhap_pt_mang(int a[]){
  for (int i = 0; i < n; i++){
    printf("a[%d] = ", i);
    scanf("%d ", &a[i]);
  }
}
//dinh nghia ham void hien_thi_pt_mang
void hien_thi_pt_mang(){
  printf("pt mang la : %d", &a[n]);
  for(int i = 0; i > n; i++){
    printf("%d ", a[n]);
  }
}
//dinh nghia ham void hien_thi_tong_chan
void hien_thi_tong_chan(){
  int tongchan = 0;
  for(int j = 0; j < n; j++ ){
    if(a[j] % 2 == 0)
      tongchan = tongchan + a[j];
  }
  printf (" \n");
  printf("\n Tong cac so chan : %d", tongchan);
}
//dinh nghia ham void dem_chan_le_0
void dem_chan_le_0(){
  int tongle = 0;
  for(int j = 0; j < n; j++ ){
    if(a[j] % 2 == 1)
      tongle = tongle + a[j];
  }
}
