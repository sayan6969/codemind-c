#include<stdio.h>
int main()
{
    int i,l,u,m;
    scanf("%d%d",&l,&u);
    for(i=1;i<=u;i++)
    {
        if(i%2!=0)
        {
            m=l*i;
            printf("%d x %d = %d
",l,i,m);
        }
    }
}
