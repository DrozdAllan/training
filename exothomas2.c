/* faire une fonction qui écrit la chaine passée en paramètre mot à l'envers */

#include <stdio.h>
#include <string.h>

int main()
{

  char mot[25];

printf("entrez un mot : ");
scanf("%s", mot);

  int longueur = strlen(mot);

  int premierelettre = mot[0];

  printf("%s fait %d caractères \n", mot, longueur);

  printf("cette chaine commence par %c \n", premierelettre);

  printf("voici cette chaine de caractere dans le sens inverse :\n");

  while (longueur >= 0)
  {

    printf("%c", mot[longueur]);

    longueur--;
  }
printf(" \n");
  return (0);
}