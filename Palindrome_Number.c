#include<stdio.h>
int main()
{
    int j,x;
    scanf("%d",&x);
    for(j=1;j<=x;j++)
    {
        int n,i,t;
        scanf("%d",&n);
        int rev=0;
        t=n;
        while(n!=0)
        {
            rev=rev*10+n%10;
            n=n/10;
        }
        if(t==rev) printf("True
");
        else printf("False
");
    }
}
