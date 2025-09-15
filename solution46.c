//Write a program to print the following pattern:
//*****
//*****
//*****
//*****
//*****
#include <stdio.h>
int main()
{
    int n;
    printf("enter the height of the pattern\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=4;j++)
        {
           printf("*");
        }
        printf("\n");
    }
}