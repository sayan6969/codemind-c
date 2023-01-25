#include<stdio.h>
int main()
{
    int s,t,b,capacity;
    scanf("%d%d%d",&s,&t,&b);
    capacity=2*s*t*b*512;
    printf("%d KB",capacity/1024);
}
