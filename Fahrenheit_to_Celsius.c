#include<stdio.h>
int main()
{
   float fahrenheit,celsius;
   scanf("%f",&fahrenheit);
   celsius = (fahrenheit - 32)*5/9;
   printf("%0.2f",celsius);
   return 0;
}
