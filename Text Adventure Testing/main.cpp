#include <iostream>

using namespace std;

/*Room data goes up here.*/

string r1 = "\nYou wake up in a small room.\nThere are doors to the WEST, EAST, and NORTH.\nYou can see 3 COINS, a KNIFE, and a STICK on the floor.\n";

string r2 = "\nThis is a dead end.\nThe doorway seals shut.\nThere is no way out.\n";

/*Room Functions go here*/

void room1();
void room2();

/*Store inputs here.*/

string input;

/*Game starts here*/

int main(){
    room1();

    return 0;
}

void gameOver(){
    cout << "GAME OVER" << endl;
    cout << "\nDo you want to try again? Y? N?\n" << endl;

    cin >> input;

    if (input=="y" || input=="yes"){
        main();
    }
    if (input=="n" || input=="no"){
    }
    else{
        cout << "\nI didn't understand that.\n" << endl;
    }
}

void room1(){
    cout << r1;
    cin >> input;
    if (input=="n" || input=="north"){
        room2();
    }
    else {
        cout << "\nI didn't understand that.\n" << endl;
        room1();
    }
}

void room2(){
    cout << r2;
    gameOver();
}
