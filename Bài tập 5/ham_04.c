#include<stdio.h>

void nhap(int a[], int n[]) {
  for (int i = 0; i < n; i++){
    printf ("nhap n [%d]", i);
    scanf("%d", &a[i]);
  }
}
int max (int a[], int n[]){
  int max = a[0];
  for (int i = 1; i < n; i++)
    if(max < a[i])
       max = a[i];
    return max;
}
int main(){
int a[1000];
int n;
printf("nhap n =");
scanf("%d", &n);
printf ("phan tu lon nhat la = %d \n", max(a, n));
return 0;
}
