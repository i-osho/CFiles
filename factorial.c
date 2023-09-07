#include <stdio.h>

int main()
{
    int n;
    double r;
    r = 1;
    printf("Enter number to find factorial : ");
    scanf("%d", &n);
    for(;n>=1; n--)
    {
        r=r*n;
    }
    printf("Factorial of above number is %lf",r);
}
