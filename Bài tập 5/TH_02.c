#include<stdio.h>

int main(){
  //khai bao bien n, S
	int n;
	int S;
	S = 0;
  //hien thi ra man hinh "nhap n ="
	printf ("Nhap n = ");
  //nhap du lieu
	scanf ("%d",&n);
	for (int i =1; i<=n; i++){
		S = S + i;
	}
	printf ("S = 1 + 2 ... + %d = %d",n,S);
	return 0;
}
