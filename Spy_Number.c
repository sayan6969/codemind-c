#include<stdio.h>
int main()
{
    int n,sum=0,mul=1,r,q;
    scanf("%d",&n);
    q=n;
    while(q>0)
    {
        r=q%10;
        mul=mul*r;
        sum=sum+r;
        q=q/10;
    }
    if(sum==mul)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}
