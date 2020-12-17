#include <stdio.h>

int main(void) {
			//khai bao bien dongia, so luong va thanh tien
int dongia, soluong, thanhtien;
			//nhap so tu ban phim
  		printf("nhap don gia :"); 
	scanf("%d", &dongia);

		printf("nhap so luong : ");
	scanf("%d", &soluong);

			//cong thuc tinh thanh tien
thanhtien = dongia * soluong;

			//neu so luong mua > hoac = 5 se giam 50%
	if (soluong >= 5 && dongia>=500){
  		printf("so tien can phai thanh toan la %d", thanhtien *50/100);

}else{

  		printf("so tien can phai thanh toan la %d", thanhtien);
			//neu nho hon 5 thi khong giam gia
}
  return 0;
}
