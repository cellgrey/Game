#include <iostream>

using namespace std;

int main()
{
    void gameover();
    void elf();
    void hudor();
    void darklord();
    void startgame();
    int choose;
    cout << "Welcome to my Game" << endl;
    cout << "1: Start Game" << endl;
    cout << "2: Quit" << endl;
    cin >> choose;
    if(choose == 1){
        cout << "OK let's go!";
        startgame();
    }
    else if(choose == 2){
        cout << "Too bad bye bye!";
    }
    else{
        cout << "Not a valid Number!" << endl;
        system("pause");
        system("cls");
        main();
    }
    return EXIT_SUCCESS;
}

gameover(){
    system("cls");
    cout << "GAME OVER!" << endl;
    system("pause");
}

elf(){
    int question;
    int strength = 5;
    int intelligence = 10;
    int stamina = 3;
    int key = 0;
    int enemy;
    system("cls");
    cout << "You wake up in a dark cave. No light. Your head is hurting so much.\nYou use your hand to look whats on the floor. You feel something strange.\nWhat you want to do?" << endl;
    cout << "1: Take it" << endl;
    cout << "2: Leave it" << endl;
    cin >> question;
    switch(question){
    case 1: cout << "You take the thing but suddenly you cut yourself because the thing is very sharp.\nAfter you realized, it wasn't just a cut, your Brain burns for a few seconds before you die.\nThe sharp thing was poisoned." << endl;system("pause"); gameover();break;
    case 2: cout << "You leave the thing where it is and you scan the wall for something interesting. You find a Key but what is it for?" << endl;key++;break;
    default: cout << "C'mon Elf. That wasn't a valid choose!" << endl;
    }
    system("pause");system("cls");
    cout << "After you found the Key, you try to stand up and scan through the cave for a way out.\nFinally you feel something grid-like with a hole in it. But suddenly a creature stands right infront of you.\nWhat you want to do?" << endl;
    cout << "1: Use the Key. Keys: " << key << endl;
    cout << "2: Talk to the creature" << endl;
    cin >> question;
    switch(question){;
    case 1: if(key>0){
        cout << "You opened the grid-like door with the key. But suddenly the creature started to scream\njumps into your face and bite the flesh of you.\nYou died." << endl; system("pause");gameover();break;
    }
    case 2: cout << "You are asking the creature what it want from you.\nThe creature stares at you for a few seconds then it attacks." << endl;break;
    default: cout << "Wise Elf, you know this choose is not valid!" << endl; system("pause");break;
    }
    enemy=4;
    do{
    system("pause");system("cls");
    cout << "Intelligence " << intelligence << "    Enemy Stamina: " << enemy << endl;
    cout << "Strength " << strength << endl;
    cout << "Stamina " << stamina << endl;
    cout << "Enemy attacks! " << endl;
    stamina = stamina - 1;
    cout << "You attack the creature with your hands" << endl;
    enemy = enemy-2;
    }while(stamina > 0 || enemy >0);
    if(stamina>0 && enemy<=0){
        cout << "You Won!" << endl;
    }
    else if(stamina <=0){
        cout << "You lost and died" << endl;system("pause");gameover();
    }


}

hudor(){
}

darklord(){
}

startgame()
{
    int race;
    system("cls");
    cout << "Welcome! What Race you want to play?" << endl;
    cout << "1: Elf" << endl;
    cout << "2: Hudor" << endl;
    cout << "3: Dark Lord" << endl;
    cin >> race;
    switch(race){
    case 1: cout << "Elf huh? Ok let the adventure begin!" << endl; system("pause");elf();break;
    case 2: cout << "A Hudor? Ok let the Adventure begin!" << endl; system("pause");hudor();break;
    case 3: cout << "The ultimate Dark Lord? Ok let the Adventure begin" << endl; system("pause");darklord();break;
    default: cout << "Thats no valid number!" << endl;system("pause");startgame();
    }
}


