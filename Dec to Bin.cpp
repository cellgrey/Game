#include <iostream>

using namespace std;

int main()
{
    void dectobin();
    void dectohex();
    int menu;
    cout << "1: Decimal to Binary" << endl;
    cin >> menu;
    switch(menu){
    case 1: dectobin();
    }
}

dectobin(){
    void again();
    int deci;
    int bin[100];
    int two = deci/2;
    int i=0;
    system("pause");
    system("cls");
    cout << "Input Number: ";
    cin >> deci;
    while(deci>=1){
        if(deci%2==1||deci==1){
            bin[i]=1;
            i++;
            deci--;
        }
        else if(deci%2==0){
            bin[i]=0;
            i++;
        }
        deci = deci/2;
    }
    i--;
    cout << "Dualnumber: ";

    while(i>-1){
        cout << bin[i];
        i--;
    }
    again();
}
    again(){
            char question;
    cout << "\nAgain? y/n: ";
    cin >> question;
    switch(question){
        case 'y': dectobin();break;
        case 'n': return EXIT_SUCCESS;
        default: cout << "Invalid Character!";again();
    }
    }
