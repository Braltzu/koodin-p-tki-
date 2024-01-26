#include <stdio.h>

int main()
{
    char fname[30];
    char movie[50];
    printf("name\n");
    scanf("%s\n", fname);
    printf("terve %s\n", fname);
    printf("mikä elokuva\n");
        fflush(stdin);
    gets(movie);

    printf("favorite movie is %s\n", movie);








    return 0;
}
