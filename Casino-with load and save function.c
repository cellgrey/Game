#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()

{
    int barmanmoney =5000;
    int money = 500;
    int choose;
    system("cls");
    printf("Welcome to the Casino!\n");
    printf("Choose!\n");
    printf("1: Roll the Dice!\n");
    printf("2: The four Barmen!\n");
    printf("3: What the Hell i am doin?\n");
    printf("4: Leave me alone i QUIT!\n");
    scanf("%d", &choose);
    switch(choose)
    {
        case 1: start(money);
        case 2: barman(barmanmoney);
        case 3: help();
        case 4: quit();
        default: printf("Choose a number from 1, 2, 3 or 4!\n");system("pause");main();
    }
}

int saveit(rest)

{
    FILE *fp;
    fp = fopen("C:\\Users\\Grey Cell\\Desktop\\save.txt", "w");
    if(fp == NULL)
    {
        printf("File not found!\n");
    }
    else
    {
        fprintf(fp, "%d\n", rest);
    }
    printf("Saved!\n");
    fclose(fp);
    system("pause");
    main();
}

int barman(barmanmoney)

{
    int n1, n2, n3, n4;
    system("cls");
    printf("Push a button to show the 4 Numbers!\n");
    system("pause");
    system("cls");
    printf("Numba   Numba   Numba   Numba\n");
    srand((unsigned int)time(NULL));
    n1 = rand() % 5 + 1;
    n2 = rand() % 5 + 1;
    n3 = rand() % 5 + 1;
    n4 = rand() % 5 + 1;
    printf("  %d", n1);
    printf("       %d", n2);
    printf("       %d", n3);
    printf("       %d\n", n4);
    if(n1==n2 || n3==n4 || n1==n3 || n2==n4 || n1==n4 || n2==n3)
    {
        printf("You won!");
        barmanmoney = barmanmoney + 1000;
        printf("You got %d\n", barmanmoney);
        system("pause");
        goagainbarman(barmanmoney);

    }
    else
        printf("You loose!");
        barmanmoney = barmanmoney / 2;
        printf("You got %d\n", barmanmoney);
        system("pause");
        goagainbarman(barmanmoney);
}

int goagainbarman(barmanmoney)

{
    char againbarman;
    printf("Again? y/n:\n");
    scanf("%s", &againbarman);
    switch(againbarman)
    {
        case 'y': barman(barmanmoney);
        case 'n': main();
        default: printf("Please choose j or n!\n");
    }
}

int start(money)

{
    int offer;
    int thinknumber;
    int load;
    char loadit;
    system("cls");
    printf("Loaded game from file!\n");
    FILE *fp;
    fp = fopen("C:\\Users\\Grey Cell\\Desktop\\save.txt", "r");
    if(fp == NULL)
    {
        printf("File not found!");
    }
    else
    {
        fscanf(fp, "%d\n", &load);
        printf("Loaded %d Money!\n", load);
    }
    fclose(fp);
    money = load;
    system("pause");
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
    printf("Again? y/n:");
    scanf("%s", &again);
    switch(again)
    {
        case 'y': start(rest);
        case 'n': saveit(rest);
        case 'c': cheater(rest);
        default: printf("Please chose j or n!\n");system("pause");goagain(rest);
    }
}

int cheater(rest)

{
    printf("THE CODE THAT RULEZ THEM ALL!\n");
    rest = rest + 100000;
    system("pause");
    start(rest);
}

int help()

{
system("cls");
printf("Roll the Dice:\nYou start with 500.\nJust choose your offer.\nThen choose what the dice will show between higher or lower or even 3.\nIs your bet right, you win 3 times the offer.\nIf you bet even and you get a 3 you win 10 times your offer.\nIf you loose you will only loose your offer.\n\n");
printf("Barman:\nYou start with 5000.\nJust hit a Button to show the four numbers.\nIf two of them equals each other then you win 1000.\nIf you loose your money will be halfed.\n\nHave Luck and Fun!\n#");
system("pause");
main();
}

int quit()

{
    printf("\nIm so sad you are leaving :( bye bye!\n");
    exit(0);
}
