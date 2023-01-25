#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float d,e;
    d=(a+b+c)/2.0;
    e=sqrt(d*(d-a)*(d-b)*(d-c));
    printf("%0.2f",e);
}
