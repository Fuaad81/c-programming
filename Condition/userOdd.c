#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number");
    scanf("%d",&number);
    if (number%2 != 0)
    {
        printf("Entered number is odd");
    }
    return 0;
}