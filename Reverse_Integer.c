#include<stdio.h>
int main()
{
    int i,n,rev=0,q,r;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        rev=rev*10+r;
        q=q/10;
    }
    printf("%d",rev);
}
