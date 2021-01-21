#include<stdio.h>

int main(){
	int a[100];
	int i,n, s = 0;
	printf("nhap kich thuoc: \n");
	scanf("%d",n);
	printf("nhap so phan tu: \n");
	for (i = 0; i < n; i++){
		scanf("%d",&a [i]);
		for (i = 0; i < n; i++){
			s = s + a[i];
		}
		printf("tong cac so tu day so tren = %d",s);
	}
	return 0;
}
