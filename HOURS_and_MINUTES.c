#include<stdio.h>
int main()
{
    int m,r,h;
    scanf("%d",&m);
    h=m/60;
    r=m%60;
    printf("%d Hour(s) %d Minute(s)",h,r);
}
