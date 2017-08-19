#include <stdio.h>
void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n<=0)
    {
        if (n==0)
            printf("the number is 0.");
        else
            printf("the number is negative.");
    }
    else
        printf("the number is positive.");
}
