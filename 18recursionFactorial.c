#include <stdio.h>
#include <string.h>
int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    // factorial fn
    int x = factorial(n);
    printf("factorial of number =%d ", x);
}