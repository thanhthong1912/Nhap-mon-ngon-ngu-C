#include <stdio.h>
int main(void){
    //khai bao cac bien 
    double DT, CV, R;
    //gan gia tri R
    R = 1.5;
    //khai bao hang ten PI
    const double PI = 3.14;
    CV = 2 * R * PI;
    DT = R * R * PI;
    //tinh chu vi hinh tron
    printf("CV = 2 * R * PI = %0.2f\n",CV);
    //tinh dien tich hinh tron
    printf("DT = R * R * PI = %0.3f\n",DT);
    printf("  R |   CV  | DT\n");
    printf(" 1.5|  9.42 | 7.065");
return 0; 
}
