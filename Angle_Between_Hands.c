#include<stdio.h>
#include<math.h>
void angle(int h,int m)
{
    float c,d;
    c=abs((30*h)-(5.5*m));
    d=360-c;
    if(c<d)
    {
        printf("%0.1f",c);
    }
    else
    {
        printf("%0.1f",d);
    }
}
int main()
{
    int h,m;
    scanf("%d:%d",&h,&m);
    angle(h,m);
}
