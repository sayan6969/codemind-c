#include<stdio.h>
int main()
{
    int n,r,s=0,p=0,sqr,sq;
    scanf("%d",&n);
    sq=n*n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    sqr=s*s;
    while(sqr>0)
    {
        r=sqr%10;
        p=p*10+r;
        sqr=sqr/10;
    }
    if(sq==p)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
