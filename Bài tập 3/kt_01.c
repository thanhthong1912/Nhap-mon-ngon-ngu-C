#include <stdio.h>
 
int main(){
    printf("\n---BANG CUU CHUONG---\n");
    //hien thi ra man hinh BANG CUU CHUONG
    for(int i = 1; i <= 10;i++){
        printf("\n---BANG NHAN %d---\n", i);
        //hien thi ra man hinh BANG NHAN va phep nhan tu 1 den 10
        for(int j = 0; j < 10; j++){
            printf("\t%d x %d = %d\n", i, j, i*j);
        }
    }
return 0;
}
