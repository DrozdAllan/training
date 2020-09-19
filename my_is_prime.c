/* write a function that returns 1 if the number is prime and 0 if not */

#include <stdio.h>

int main()

{

    int x;
    int i = 1;

    printf("enter a number :");

    scanf("%d", &x);

    while (i < 10)
    {

        if (x % i == 0)

        {

            printf("1");
        }
        else
        {

            printf("0");
        }
        i++;
        return (0);
    }
}