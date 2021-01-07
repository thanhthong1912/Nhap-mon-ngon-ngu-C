#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    //gan tra tri a,b,c
    float delta,x1,x2,x;

    printf("chuong trinh tinh nghiem phuong trinh bac 2\n");
    printf("phuong trinh co dang ax^2 + bx + c = 0\n");
    printf("nhap hang so phuong trinh\n");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("c = ");
    scanf("%d",&c);
    //nhap du lieu chuong trinh tren

    delta=pow(b,2)-4*a*c;
    //tinh delta

    if (delta >0){
        x1=(-b + sqrt(delta))/(2*a);
        x2=(-b - sqrt(delta))/(2*a);
    //tinh nghiem pt
        printf("Phuong trinh %dx^2 + %dx + %d = 0 co 2 nghiem\n",a,b,c);
        printf("x1 = %.2f\n",x1);
        printf("x2 = %.2f\n",x2);
    }
    else if (delta == 0){
        x= -b/(2*a);
        printf("phuong trinh %dx^2 + %dx + %d = 0 co nghiem kep\n",a,b,c);
        printf("x = %.f\n",x);
    }
    else{
        printf("phuong trinh %dx^2 + %dx + %d = 0 vo nghiem\n",a,b,c);
    }
return 0;
}
