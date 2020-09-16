/* my_put_nbr : write a function that displays the number given as a parameter. It must be able to display
all the possible values of an int, and must be prototyped as follow :
int my_put_nbr (int nb); */

#include <stdio.h>

int main()
{

    int nb[30];

        printf("entrez un nombre entier : ");
        scanf("%ls", nb);

        printf("%ls \n", nb);


    return (0);
}