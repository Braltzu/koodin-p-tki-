#include <stdio.h>

int main()
{
    int luku1;
    int alennus;
    int kokonaisalennus;
    printf("anna kk ostosten euromaara");
    scanf("%d", &luku1);


    if(luku1<=100) {
        alennus=10;
        printf("sinulle on annettu 10prosenttia alennus\n");
    }
    else if(luku1<300 && luku1>100) {
        alennus=15;
        printf("sinulle on annettu 15prosenttia alennus\n");
    }
    else if(luku1<500) {
        alennus=20;
        printf("sinulle on annettu 20prosenttia alennus\n");
    }
    else if (luku1>500 || luku1==500) {
        alennus=25;
        printf("sinulle on annettu 25prosenttia alennus\n");
    }

    kokonaisalennus=(luku1 - luku1 * alennus/100);

    printf("olet ostanut tassa kuussa %d maaran\n", luku1);
    printf("saat siita alennusta %d \n", alennus);
        printf("kokonais summa on %d \n", kokonaisalennus);






















    return 0;
}
