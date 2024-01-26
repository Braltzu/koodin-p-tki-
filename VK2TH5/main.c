#include <stdio.h>

int main()
{
    int ID;
    char nimi[30];
    int os1;
    int os2;
    int os3;
    int pisteet;
    float keskiarvo;

    printf("anna ID \n");           //puolipiste
        scanf("%d", &ID);

    printf("anna nimi \n");
        scanf("%s", nimi);

    printf("anna suoritus1 \n");
        scanf("%d", &os1);

    printf("anna suoritus2 \n");
        scanf("%d", &os2);

    printf("anna suoritus3 \n");
        scanf("%d", &os3);


        pisteet = os1 + os2 + os3;

        keskiarvo= pisteet / 3;

        if(keskiarvo<=40)
            printf("ID %d \nnimi %c \nosasuoritus1 %d \nosasuoritus2 %d\nosasuoritus3 %d\npisteet %d\nkeskiarvo %.2f\narvosana Hylatty", ID, nimi, os1, os2, os3, pisteet, keskiarvo);

        else if(keskiarvo<=59)
            printf("ID %d \nnimi %c \nosasuoritus1 %d \nosasuoritus2 %d\nosasuoritus3 %d\npisteet %d\nkeskiarvo %.2f\narvosana valttava", ID, nimi, os1, os2, os3, pisteet, keskiarvo);

        else if(keskiarvo<=79)
            printf("ID %d \nnimi %c \nosasuoritus1 %d \nosasuoritus2 %d\nosasuoritus3 %d\npisteet %d\nkeskiarvo %.2f\narvosana hyva", ID, nimi, os1, os2, os3, pisteet, keskiarvo);

        else
            printf("ID %d \nnimi %c \nosasuoritus1 %d \nosasuoritus2 %d\nosasuoritus3 %d\npisteet %d\nkeskiarvo %.2f\narvosana kiitettava", ID, nimi, os1, os2, os3, pisteet, keskiarvo);






    return 0;
}
