#include <stdio.h>

int main() {
  //gan gia tri va tao mang
  int a[4];
  int i, tong = 0;
  a[0] = 3; a[1] = 5; a[2] = 7; a[3] = 2;
    printf("%d \n", a[0]);
    printf("%d \n", a[1]);
    printf("%d \n", a[2]);
    printf("%d \n", a[3]);
  //tinh tong
  for(int i = 0; i < 4; i++){
 tong = tong + a[i];
 }
  //hien thi ra mang hinh tong day so 
printf("tong cac so tu day tren = %d\n", tong);

return 0;
}
