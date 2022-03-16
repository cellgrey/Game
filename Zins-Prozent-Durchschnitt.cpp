#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    system("cls");
    void nochmal();
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    int jahre;
    float zins;
    float einlage;
    int j;
    float ergebnis2;
    float ergebnis;
    int j2;
    float einlage2;
    float zinszins;
    void zinszahl();
    int choose;
    void prozent();
    void edurchschnitt();
    cout << "1: Kapital" << endl;
    cout << "2: Zinszahl" << endl;
    cout << "3: Prozent" << endl;
    cout << "4: Einfacher Durchschnitt" << endl;
    cin >> choose;
    switch (choose){
        case 1: break;
        case 2: zinszahl(); break;
        case 3: prozent(); break;
        case 4: edurchschnitt(); break;
        default: cout << "Error!" << endl; system("pause"); return 0;
    }
    system("cls");
    cout << "Kapital: ";
    cin >> einlage;
    einlage2 = einlage;
    cout << "Zinssatz in Prozent: ";
    cin >> zins;
    cout << "Jahre: ";
    cin >> jahre;
    cout << "\n";
    j = jahre - jahre + 1;
    ergebnis = einlage * pow((1+ zins / 100), jahre);
    ergebnis2 = einlage * 1 / pow((1 + zins / 100), jahre);
    j2 = jahre;
    while(jahre>0){
        zinszins = einlage / 100 * zins;
        einlage = einlage + einlage / 100 * zins;
        cout << "Nach dem " << j << ". Jahr: "<< einlage << " Euro. Davon sind " << zinszins << " Euro Zinsen!" << endl;
        jahre--;
        j++;
    }
    cout << "\nUm " << einlage2 << " Euro in " << j2 << " Jahren zu erhalten muss folgendes Kapital angelegt werden: " << ergebnis2 << " Euro\n"<< endl;
    system("pause");
    nochmal();
    return 0;
}

zinszahl(){
    float gesamt;
    float zinssatz;
    int tage;
    float berechnung;
    float zinszahl;
    float ergebnis;
    void nochmal();
    system("cls");
    cout << "Gesamtbetrag eingeben: ";
    cin >> gesamt;
    cout << "Zinssatz in Prozent eingeben: ";
    cin >> zinssatz;
    cout << "Tage eingeben: ";
    cin >> tage;
    zinszahl = 360 / zinssatz;
    berechnung = gesamt / 100 * tage;
    ergebnis = berechnung / zinszahl;
    cout << "Zinszahl: " << berechnung << endl;
    cout << "Zinsteiler: " << zinszahl << endl;
    cout << "Die Zinsen betragen: " << ergebnis << " Euro!" << endl;
    system("pause");
    nochmal();

}

prozent(){
    system("cls");
    void nochmal();
    float wert;
    float prozentwert;
    float prober;
    float berechnung;
    cout << "Wert eingeben: ";
    cin >> wert;
    cout << "Prozentwert der dem eingegebenen Wert entspricht: ";
    cin >> prozentwert;
    cout << "Wieviel Prozent von diesem Wert wollen sie berechnen: ";
    cin >> prober;
    berechnung = wert / prozentwert * prober;
    cout << "Wenn " << prozentwert << "% ---> " << wert << "\nDann " << prober << " ---> " << berechnung << endl;
    system ("pause");
    nochmal();
}

edurchschnitt(){
    system("cls");
    int anzahl = 0;
    float werte[100];
    float summe;
    int i;
    int x;
    int f=1;
    cout << "Anzahl der Werte: ";
    cin >> anzahl;
    for(i=0;anzahl>i;i++){
        cout << f << ". Wert: ";
        cin >> werte[i];
        summe = summe + werte[i];
        f++;
    }
    cout << "Der einfache Durchschnitt: " << summe / anzahl << endl;
    system("pause");
}

nochmal(){
    char auswahl;
    system("cls");
    cout << "Nochmal? j/n: ";
    cin >> auswahl;
    switch(auswahl){
        case 'j': cout << "OK!"; main(); break;
        case 'n': cout << "Bye Bye!"; return EXIT_SUCCESS;break;
        default: cout << "Falsche Eingabe!"; system("pause"); nochmal(); break;
    }
}
