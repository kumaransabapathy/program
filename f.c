#include <stdio.h>
void main()
{
    int n, i;
    fact=1;
    printf("Enter an int");
    scanf("%d",&n);
    if (n < 0)
        printf("factorial of a negative num does not exist");
    else
    {
        for(i=1; i<=n; ++i)
        {
         fact=fact*i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }
return 0;
}
