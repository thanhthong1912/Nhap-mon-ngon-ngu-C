#include <stdio.h>

int main ()
{
	//khai bao bien i va n
int i, n;
	//hien thi ra man hinh chu nhap so
	printf("Nhap so \n");
	//nhap mot so ra tu ban phim
	scanf("%d",&n);
        {
    //hien thi dong chu so le ra man hinh
    printf("So le \n");
        }
    {
    //vong lap so le
for(i = 1; i <= n; i = i + 2)
if(i <= n )
        {
    //hien thi ket qua ra man hinh
    printf("%d ",i);
        }
    }
        {
    printf("\nSo Chan \n");
        }
    {
    //vong lap so chan
    for(i = 2; i <= n; i = i = i + 2)

	if ( i <= n)
        {
        //hien thi ket qua ra man hinh
		printf("%d ",i);
        }
    }
return 0;
}
