//Write a program to print the following pattern:
//1
//12
//123
//1234
//12345
#include <stdio.h>
int main()
{
    int n;
    printf("enter the height of the pattern\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
           printf("%.d",j);
        }
        printf("\n");
    }
}