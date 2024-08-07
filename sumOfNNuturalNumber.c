#include <stdio.h>

int main()
{
    int n, totalSum = 0, counter = 1;
    printf("Enter The Positive Integer Number: ");
    scanf("%d", &n);

    while (counter <= n)
    {
        totalSum += counter ;
        counter++;
    }

    printf("The Sum Of First %d Natural Number Result Is : %d \n ",n,totalSum);
    return 0;
}


