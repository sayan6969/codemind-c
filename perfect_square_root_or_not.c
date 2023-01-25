#include<stdio.h>
int main()
{
    int i, number, flag=0;
    scanf("%d", &number);
    if(number == 1 || number == 0){
        flag=1;
    }

    for(i=2;i<=number/2;i++)
    {
        if(number == i*i)
        {
            flag=1;
            break;
        }
    }
    if(flag == 0)
        printf("False");
    else printf("True");    
}
