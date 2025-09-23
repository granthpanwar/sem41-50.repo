// Write a program to print the following pattern:
//*****
// ****
//  ***
//   **
//    *
#include <stdio.h>
int main()
{
int len;
printf("enter the height of the tower\n");
scanf("%d",&len);
for(int i=0;i<len;i++)
{
    for(int j=0;j<i;j++)
    {
        printf(" ");
    }
    for(int k=len;k>i;k--)
    {
        printf("*");
    }
    printf("\n");
}
}