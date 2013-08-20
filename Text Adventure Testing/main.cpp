#include <iostream>

using namespace std;

/*Room data goes up here.*/

string r1 = "You wake up in a small room.\nThere are doors to the WEST, EAST, and NORTH.\nYou can see 3 COINS, a KNIFE, and a STICK on the floor.\n";

string rN = "This is a dead end.\nThe doorway seals shut.\nThere is no way out.\nGAME OVER\n";

/*Room Functions go here*/

void room1();
void roomN();

/*Store inputs here.*/

string input;

/*Game starts here*/

int main()
{
    room1();

    return 0;
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
}
