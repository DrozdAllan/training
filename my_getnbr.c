/* write a function that returns a number, sent to the function as a string.
it must be prototyped as follows :
int my_getnbr (char const *str); */

#include <stdio.h>

int main()
{

    char brut[200];

    printf("entrez une suite de caractères aléatoires comprenant un ou plusieurs chiffres : ");

    scanf("%s", brut);

    printf("vous avez entré : %s \n", brut);

    int i = 0;

    printf("les chiffres détectés dans cette suite sont ");
    while (brut[i] != '\0')

    {
        while (brut[i] == '0' || brut[i] == '1' || brut[i] == '2' || brut[i] == '3' || brut[i] == '4' || brut[i] == '5' || brut[i] == '6' || brut[i] == '7' || brut[i] == '8' || brut[i] == '9')

        {
            if (brut[i - 1] == '-')
            {
                printf("%c", brut[i - 1]);
                printf("%c", brut[i]);
            }
            else
            {
                printf("%c", brut[i]);
            }
            i++;
        }

printf(" ");
        i++;
    }
    printf("\n");
    return (0);
}