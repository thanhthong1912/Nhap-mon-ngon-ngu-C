#include <stdio.h>
int main() 
{
    int a, b, i;
    //khai bao bien a,b va i
    scanf("%d\n%d",&a,&b);
    for(i=a;i<=b;i++)
    {
      if (i<=9)
      {
        switch (i) {
        case 0:
          printf("zero");break;
        case 1:
          printf("one");break;
        case 2:
          printf("two");break;
        case 3:
          printf("three");break;
        case 4:
          printf("four");break;
        case 5:
          printf("five");break;
        case 6:
          printf("six");break;
        case 7:
          printf("seven");break;
        case 8:
          printf("eight");break;
        case 9:
          printf("nine");break;
          //hien thi cac chu cai khi nhap so
        }
      } else 
      {
        if (i % 2 == 0)
          printf("even\n");
          //hien thi so le khi nhap so
        else
          printf("odd\n");
          //hien thi so chan khi nhap so
      }
    }
    return 0;
}
