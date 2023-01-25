#include<stdio.h>
int main()
{
    int n,o,rem,p=1,s=0,tc;
    scanf("%d",&n);
    o=n;
    while(n!=0)
    {
        rem=n%10;
        p=p*rem;
        s=s+rem;
        n=n/10;
    }
    tc=(p-s);
    printf("%d",tc);
}
