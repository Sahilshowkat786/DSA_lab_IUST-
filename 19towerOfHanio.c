#include <stdio.h>

void tower_of_hanio(int n, char source, char aux, char des)
{
    if (n == 0)
        return;
    else
    {  // move n-1 from source to aux
        tower_of_hanio(n - 1, source, des, aux);

        printf(" Move disk no %d from  %c to %c\n", n,source, des);
      // n-1 disks from aux to des
        tower_of_hanio(n - 1, aux, source, des);
        return;
    }
} 
int main()
{
    int n;
    printf("enter no of disk= ");
    scanf("%d", &n);
    tower_of_hanio(n, 'a', 'b', 'c');
    return 0;
}