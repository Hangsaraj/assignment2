#include <stdio.h>
int main()
{
    int year;
    printf("Enter Year: ");
    scanf("%d", &year);
    if (year % 400 == 0)
    {
        printf("%d is a Leaf Year.", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is Not a Leaf Year.", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a Leaf Year.", year);
    }
    else{
        printf("%d is Not a Leaf Year.",year);
    }
    return 0;
}
