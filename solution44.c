//
#include <stdio.h>
int main() 
{
    int n, i;
    float numerator = 1, denominator = 2, sum = 0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        sum += numerator / denominator; 
        numerator += 2;                
        denominator += 2;              
    }
    printf("The sum of the series up to %d terms is: %.2f\n", n, sum);

    return 0;
}