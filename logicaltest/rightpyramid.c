#include <stdio.h>
    
int main()
{
    int limit,i,j;
    printf("Enter limit");
    scanf("%d",&limit);
    for (i = 0; i <= limit; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}