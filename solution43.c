// write a program to check if the number is strong number or not
#include <stdio.h>
int main()
{
    int num,temp,remainder,sum=0,fact;
    printf("enter a  number \n");
    scanf("%d",&num);
    temp=num;
    
    while(temp>0)
    {
        remainder=temp%10;
        fact=1;
        for(int i=1;i<=remainder;i++)
        {
           fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
     if(sum == num)
     {
        printf("strong number");
     }
     else
     {
        printf("not a strong number");
     }
     return 0;
}