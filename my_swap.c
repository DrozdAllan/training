/* write a function that swaps the content of two integers, whose addresses are given as a parameter. */


#include <stdio.h>

int main()
{

int *x, *y, temp;


printf("enter an integer :");
scanf("%d", &x);

printf("enter another integer :");
scanf("%d", &y);

temp = x;

x = y;

y = temp;

printf("the two numbers are changed : %d \n", x);
printf("%d \n", y);





    return(0);
}
