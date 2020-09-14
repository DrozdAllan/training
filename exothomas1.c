/* écrire tous les N caractères (envoyé en param <placemaj>) en majuscules */

#include <stdio.h>
#include <ctype.h>

int main()
{

    char *mot = "anticonstitutionnellement";

    int placemaj = 3;

    int i = 0;
    int j = 0;

    while (mot[i] != '\0')
    {

        char lettre;

        if (j == placemaj - 1)
        {
            lettre = mot[i];
            printf("%c", toupper(lettre));
            j = 0;
        }
        else
        {

            lettre = mot[i];
            printf("%c", lettre);
            j++;
        }

        printf(" ");
        i++;
    }
    return (0);
}