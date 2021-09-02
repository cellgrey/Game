#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    system("cls");
    int wahl;
    printf("Willkommen bei Rechenmeister!\n");
    printf("Was wollen sie berechnen?\n\n");
    printf("1: Addition\n2: Substraktion\n3: Multiplikation\n4: Division\n5: Beenden\n");
    scanf("%d", &wahl);
    switch(wahl)
    {
        case 1: Addition(); break;
        case 2: Substraktion(); break;
        case 3: Multiplikation(); break;
        case 4: Division(); break;
        case 5: printf("Auf Wiedersehen!"); return 0;
        default: printf("\nDas steht leider nicht zur Wahl!\n"); main();
    }
    return 0;
}
int Addition()
{
    system("cls");
    int w1, w2, ea;
    char ag;
    printf("Willkommen bei der Addition!\n");
    printf("Geben sie den ersten Wert ein: ");
    scanf("%d", &w1);
    printf("Geben sie den zweiten Wert ein: ");
    scanf("%d", &w2);
    ea = w1 + w2;
    printf("Das Ergebnis lautet: %d", ea);
    printf("\nNochmal? (j/n)");
    scanf("%s", &ag);
    switch(ag)
    {
        case 'j': Addition();
        case 'n': main();
    }
    return 0;
}
int Substraktion()
{
    system("cls");
    char ag;
    int w1, w2, ea;
    printf("Willkommen bei der Substraktion!\n");
    printf("Geben sie den ersten Wert ein: ");
    scanf("%d", &w1);
    printf("Geben sie den zweiten Wert ein: ");
    scanf("%d", &w2);
    ea = w1 - w2;
    printf("Das Ergebnis lautet: %d", ea);
    printf("\nNochmal? (j/n)");
    scanf("%s", &ag);
    switch(ag)
    {
        case 'j': Substraktion();
        case 'n': main();
    }
    main();
    return 0;
}
int Multiplikation()
{
    system("cls");
    char ag;
    int w1, w2, ea;
    printf("Willkommen bei der Multiplikation!\n");
    printf("Geben sie den ersten Wert ein: ");
    scanf("%d", &w1);
    printf("Geben sie den zweiten Wert ein: ");
    scanf("%d", &w2);
    ea = w1 * w2;
    printf("Das Ergebnis lautet: %d", ea);
    printf("\nNochmal? (j/n)");
    scanf("%s", &ag);
    switch(ag)
    {
        case 'j': Multiplikation();
        case 'n': main();
    }
    return 0;
}
int Division()
{
    system("cls");
    char ag;
    int w1, w2, ea, ear;
    printf("Willkommen bei der Division!\n");
    printf("Geben sie den ersten Wert ein: ");
    scanf("%d", &w1);
    printf("Geben sie den zweiten Wert ein: ");
    scanf("%d", &w2);
    ea = w1 / w2;
    ear = w1 % ea;
    printf("Das Ergebnis lautet: %d", ea);
    printf("\nRest: %d", ear);
    printf("\nNochmal? (j/n)");
    scanf("%s", &ag);
    switch(ag)
    {
        case 'j': Division();
        case 'n': main();
    }
    return 0;
}

