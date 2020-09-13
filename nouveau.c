#include <stdio.h>



int nomdemerde(char* place, char n)
{

    int p = 0;
    int tmp = 0;
    while (place[p] != '\0')
    {
        if (place[p] == n)
        {
            tmp = p;
        }
        p++;
    }
    return (tmp);
}


int main()
{

    char *str = "anticonstitutionnellement";
    printf("%d", nomdemerde("anticonstitutionnellement", 'i'));
}
