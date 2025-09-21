#include <stdio.h>
#include <string.h>
void pall(char str[], char *p, char *q)
{
    while (*q != '\0')
    { // move q pointer to the end of string
        q++;
    }
    q--; // one step back to last chart

    int flag = 1; // is palliandrome
    while (p <= q)
    {
        q--;
        p++;
        if (*p != *q)
        {
            flag = 0; // not pallindrome
            break;
        }
    }
    if (flag == 1)
    {
        printf("string is pallindrome");
    }
    else
    {
        printf("sting is not pallindrome");
    }
}

int main()
{

    char str[100], *p, *q;
    p = &str[0]; // strat pt
    q = &str[0];
    printf("enter a string = ");
    scanf("%s", str);
    // pallindrome function
    pall(str, p, q);
}