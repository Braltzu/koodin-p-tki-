#include <stdio.h>

int main()
{
    int myNum=1;
    int sumOfNums=0;
    /*
    for(int x=1; x<=5; x++){
        printf("Give me a number\n");
        scanf("%d",&myNum);
        sumOfNums=sumOfNums+myNum;
    }

    while (myNum > 0) {
        printf("Give me a number\n");
        scanf("%d",&myNum);
        sumOfNums+=myNum;
    }
    */
    do{
        printf("Give me a number\n");
        scanf("%d",&myNum);
        sumOfNums+=myNum;

    }   while (myNum !=0);

printf("The sum of given numbers is %d\n",sumOfNums);


 return 0;
}
