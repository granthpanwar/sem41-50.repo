//wop to swap first and last digit of a number
#include <stdio.h>
int main()
{
    int num,nnum,temp,ld,fd,prd=1;
    printf("enter the number\n");
    scanf("%d",&num);
    temp=num;
    int length=-1;
    while(temp>0)
    {
        int l=temp%10;
        length++;
        temp=temp/10;
    }
    for(int i=0; i<length;i++)
    {
        prd=prd*10;
    }
    ld=num%10;  // taking last digit
    fd=num/prd; //taking first digit
    int a = num % prd;
    int b = a/10;


   int swap1=b*10+fd;
   int swap2=ld*prd + swap1;
   printf("%.d",swap2);
}