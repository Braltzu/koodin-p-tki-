#include <stdio.h>

int main()
{
    int luku;
    printf("Anna luku 1-7");
    scanf("%d", &luku);

    if (luku==1) {
    printf("maanantai\n");
              }
              else if(luku==2)
             {
    printf("tiistai\n");
             }
              else if(luku==3)
              {
    printf("keskiviikko\n");
             }
             else if(luku==4)
             {
    printf("torstai\n");
             }
             else if(luku==5)
             {
    printf("perjantai\n");
             }
             else if(luku==6)
             {
    printf("lauantai\n");
             }
             else if(luku==7)
             {
    printf("sunnuntai\n");
             }


             if(luku>7 && luku<1) {
    printf("pikkulauantai ei ole paiva\n");
             }













return 0;
}












