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
    char again;
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
    printf("What you think? Will the Dice roll higher or lower than 3?\n");
    printf("1: Higher\n2: Lower\n");
    scanf("%d", &thinknumber);
    system("cls");
    int dicenumber;
    srand((unsigned int)time(NULL));
    dicenumber = rand() % 6;
    printf("Push a button to roll the Dice!\n");system("pause");
    printf("The dice rolled: %d\n", dicenumber);
    if((dicenumber > 3) && (thinknumber == 1))
    {
        offer = offer * 3;
        printf("You lucky bastard! You won: %d\n", offer);
        rest = rest + offer;
        printf("Now you have: %d\n", rest);
        printf("Again? j/n:");
        scanf("%s", &again);
        switch(again)
        {
            case 'j': start(rest);
            case 'n': main();
            default: printf("Please chose j or n!");
        }
    }
    else if((dicenumber < 3) && (thinknumber == 2))
    {
        offer = offer * 3;
        printf("You lucky bastard! You won: %d\n", offer);
        rest = rest + offer;
        printf("Now you have: %d\n", rest);
        printf("Again? j/n:");
        scanf("%s", &again);
        switch(again)
        {
            case 'j': start(rest);
            case 'n': main();
            default: printf("Please chose j or n!");
        }
    }
    else
        printf("You loose much money!");
        printf("Now you have: %d\n", rest);
        if(rest <= 0)
        {
            printf("You have no money left! Have a nice day!\n");system("pause");main();
        }
        printf("Again? j/n:");
        scanf("%s", &again);
        switch(again)
        {
            case 'j': start(rest);
            case 'n': main();
            default: printf("Please chose j or n!");
        }

    return 0;


}


int help()
{

}

int quit()
{
    printf("\nIm so sad you are leaving :( bye bye!\n");
    exit(0);
}
