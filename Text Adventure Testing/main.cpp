#include <iostream>

using namespace std;

/*Room data goes up here.*/

string r1 = "\nYou wake up in a small room.\nThere are doors to the WEST, EAST, and NORTH.\nYou can see 3 COINS, a KNIFE, and a STICK on the floor.\n";

string rN = "\nThis is a dead end.\nThe doorway seals shut.\nThere is no way out.\n";

/*Room Functions go here*/

void room1();
void roomN();

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
        cout << "\nWhat was that?\n" << endl;
    }
}

void room1(){
    cout << r1;
    cin >> input;
    if (input=="n" || input=="north"){
        roomN();
    }
    else {
        cout << "\nDidn't get that.\n" << endl;
        room1();
    }
}

void roomN(){
    cout << rN;
    gameOver();
}
