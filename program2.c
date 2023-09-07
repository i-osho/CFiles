#include <stdio.h>
#include <conio.h>
int main()
{
    int p, t;
    float r, si;
    printf("Enter Principle Amount : ");
    scanf("%d", &p);
    printf("Enter time (in year(s)) : ");
    scanf("%d", &t);
    printf("Enter rate of intrest : ");
    scanf("%f", &r);
    si = p*r*t/100;
    
    printf("%f", si);
    getch();
}