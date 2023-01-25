#include<stdio.h>
int main()
{
    int n,l=0,q,r;
    scanf("%d",&n);
    q=n;
    while(q>0)
    {
        r=q%10;
        if(l<r)
        {
            l=r;
        }
        q=q/10;
    }
    printf("%d",l);
}
