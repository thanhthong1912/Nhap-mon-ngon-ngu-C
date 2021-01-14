#include <stdio.h>

int main()
{	
  //khai bao bien va tao mang
	int array[4] = {3, 5, 7, 2};
  //khai bao bien i, bien s = 0
	int i, s = 0;
  //khai bao bien n = 4
	int n = 4;
	{
  //vong lap xuat ra so 3, 5, 7, 2
		for ( i = 0; i < n; i++)
		{
      //hien thi tren man hinh 3, 5, 7, 2
			printf("%d", array[i]);
		}
	}
	//tinh tong cac so tu day tren
	for ( i = 0; i < n; i++)
	{
		s = s + array[i];
	}
		printf("tong cac so tu day tren = %d\n", s);
return 0;
}
