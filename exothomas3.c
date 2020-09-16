/* écrire une fonction qui inverse les caractères de début et de fin */

#include <stdio.h>
#include <string.h>

int main()
{
    char mot[25];

printf("entrez un mot : ");
scanf("%s", mot);

    int longueur = strlen(mot);

    printf("%s fait %d caractères \n", mot, longueur);

    int premierelettre = mot[0];

    int dernierelettre = mot[longueur - 1];

    printf("voici cette chaine de caractere avec la premiere et derniere lettre inversées :\n");

    printf("%c ", dernierelettre);

    int i = 1;

    while (i < longueur-1)
    {

        printf("%c ", mot[i]);

        i++;
    }

    printf("%c \n", premierelettre);

    return (0);
}