//****************************************CODE**********
//Khoi khai bao
#include<stdio.h>
int kiem_tra_am_duong (int n);

//khoi ham main
int main(){
  int n;//khai bao n
  printf("Nhap n = ");//hien thi ra man hinh nhap n =
  scanf("%d", &n);//nhap du lieu
  if(kiem_tra_am_duong(n) > 0)
      printf("n la so nguyen duong ");//hien thi ra man hinh so nguyen duong
  else if (kiem_tra_am_duong(n) < 0)
    printf("n la so nguyen am");//hien thi ra man hinh so nguyen am
  else 
    printf("n = 0");
  return 0;
}
int kiem_tra_am_duong (int n){
  int kiem_tra_am_duong;
  return n;
}

// khoi dinh nghia ham

//*************************END CODE*****************************
