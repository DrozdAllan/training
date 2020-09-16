/* faire une fonction qui écrit la chaine passée en paramètre mot à l'envers */

#include <stdio.h>
#include <string.h>

int main()
{
  char *mot = "anticonstitutionnellement";

  int debut = 0;

  int longueur = strlen(mot);

  int premierelettre = mot[debut];

  printf("%s fait %d caractères \n", mot, longueur);

  printf("cette chaine commence par %c \n", premierelettre);

  printf("voici cette chaine de caractere dans le sens inverse \n");

  while (mot[longueur] >= 0)
  {

    printf("%c", mot[longueur]);

    longueur--;
  }
printf(" \n");
  return (0);
}