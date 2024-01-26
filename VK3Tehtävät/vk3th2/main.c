#include <stdio.h>

int main()
{
   /* char nimi[30];
    int maara;
    printf("kerro nimesi\n");
    scanf("%s", nimi);

    printf("kerro kuinka monesti nimi tulostetaan");
    scanf("%d", &maara);

   // maara = ;
    while (maara >0) {
        printf("%s \n", nimi);
        --maara;
    } */

        //while loopilla tehty


  /* char nimi[30];
   int maara;

   printf("kerro nimesi\n");
   scanf("%s", nimi);
   printf("kerro kuinka monesti nimi tulostetaan");
   scanf("%d", &maara);

   do {
       printf("%s \n", nimi);
       maara--;

   }

   while (maara >=1);

    */
   char nimi[30];
   int maara;
   //int count = 1;

   printf("kerro nimesi\n");
   scanf("%s", nimi);
   printf("kerro kuinka monesti nimi tulostetaan");
   scanf("%d", &maara);
//maara--;


   for (int count=0; count < maara; count++){
        printf("%s \n", nimi);

       }









   return 0;
}
