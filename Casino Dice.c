#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void)
{
    int money = 500;
    int choose;
    system("cls");
    printf("Welcome to the Casino!\n");
    printf("Choose!\n");
    printf("1: Lets get started!\n");
    printf("2: What the Hell i am doin?\n");
    printf("3: Leave me alone i QUIT!\n");
    scanf("%d", &choose);
    switch(choose)
    {
        case 1: start(money);
        case 2: help();
        case 3: quit();
        default: printf("Choose a number from 1, 2 or 3!\n");system("pause");main();

    }


}

int start(money)
{
    int offer;
    int thinknumber;
    system("cls");
    printf("Your money: %d\n", money);
    printf("Can you choose how much you wanna offer: ");
    scanf("%d", &offer);
    int rest = money - offer;
    if (rest < 0)
    {
        printf("Nah you dont have that much money\n");system("pause");
        rest = rest + offer;
        start(rest);
    }
    else
    printf("Your offer: %d\n", offer);
    printf("What you think? Will the Dice roll higher, lower or even 3?\n");
    printf("1: Higher\n2: Lower\n3: Even\n");
    scanf("%d", &thinknumber);
    system("cls");
    int dicenumber;
    srand((unsigned int)time(NULL));
    dicenumber = rand() % 6 + 1;

    printf("Push a button to roll the Dice!\n");system("pause");
    printf("The dice rolled: %d\n", dicenumber);
    if((dicenumber > 3) && (thinknumber == 1))
    {
        offer = offer * 3;
        printf("You lucky bastard! You won: %d\n", offer);
        rest = rest + offer;
        printf("Now you have: %d\n", rest);
        goagain(rest);
    }
    else if((dicenumber < 3) && (thinknumber == 2))
    {
        offer = offer * 3;
        printf("You lucky bastard! You won: %d\n", offer);
        rest = rest + offer;
        printf("Now you have: %d\n", rest);
        goagain(rest);
    }
        else if((dicenumber == 3) && (thinknumber == 3))
    {
        offer = offer * 10;
        printf("You lucky bastard! You won the Jackpot: %d\n", offer);
        rest = rest + offer;
        printf("Now you have: %d\n", rest);
        goagain(rest);

    }
    else
    printf("You loose much money!\n");
    printf("Now you have: %d\n", rest);
    if(rest <= 0)
    {
        printf("You have no money left! Have a nice day\n!");system("pause");main();
    }
    goagain(rest);



}

int goagain(rest)
{
    char again;
    printf("Again? j/n:");
    scanf("%s", &again);
    switch(again)
    {
        case 'j': start(rest);
        case 'n': main();
        case 'c': cheater(rest);
        default: printf("Please chose j or n!\n");system("pause");goagain(rest);
    }
}

int cheater(rest)
{
    printf("THE CODE THAT RULEZ THEM ALL!\n");
    rest = rest + 10000;
    system("pause");
    start(rest);
}

int help()
{
system("cls");
printf("Just choose your offer.\nThen choose what the dice will show between higher or lower or even 3.\nIs your bet right, you win 3 times the offer.\nIf you loose you will only loose your offer.\nHave Fun!\n");
system("pause");
main();
}

int quit()
{
    printf("\nIm so sad you are leaving :( bye bye!\n");
    exit(0);
}
