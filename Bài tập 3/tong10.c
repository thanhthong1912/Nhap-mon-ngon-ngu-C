#include <stdio.h>
 
int main()
{
    int tong;
    tong = 0;
    int dem;
    for (dem = 1; dem <= 10; dem++)
    {
        tong = tong + dem;
    }
 
    printf("tong: %d", tong);
 
    return 0;
}
