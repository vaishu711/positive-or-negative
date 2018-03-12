#include <stdio.h>

int main()
{
    int x, y, z, i, n;

    
    printf("Enter number of terms: ");
    scanf("%d", &n);

    x = 0;
    y = 1;
    z = 0;

    printf("Fibonacci terms: \n");


    for(i=0; i<=n; i++)
    {
        printf("%d, ", z);

        x = y;     
        y = z;    
        z = x + y;
    }

    return 0;
}
