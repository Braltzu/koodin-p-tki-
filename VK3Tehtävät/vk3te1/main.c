#include <stdio.h>

int main()
{
    int ekaLuvut[]={10,20,30};
    int tokaLuvut[3]={2,4,6};
    int tulos[3];

    //taulukoiden alkioiden summaus ja talletus tulos-taulukkoon
    tulos[0]=ekaLuvut[0]+tokaLuvut[0];
    tulos[1]=ekaLuvut[1]+tokaLuvut[1];
    tulos[2]=ekaLuvut[2]+tokaLuvut[2];

    printf("tulostaulukon sisalto %d %d %d\n", tulos[0], tulos[1], tulos[2]);
    //em. toistorakenteella

    for(int i=0; i<3; i++) {
        tulos[i]=ekaLuvut[i]+tokaLuvut[i];
    }
    printf("tulostaulukon sisalto:\n");
    int j=0;
    while (j<3) {
        printf("%d\n", tulos[j]);
        j++;
    }

    return 0;
}
