#include <iostream>

using namespace std;

/*Room data goes up here.*/

string r1 = "You wake up in a small room.\nThere are doors to the WEST, EAST, and NORTH.\nYou can see 3 COINS, a KNIFE, and a STICK on the floor.";

string rN = "This is a dead end.\nThe doorway seals shut.\nThere is no way out.\nGAME OVER";

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
    if (input=="n" || "north"){
        roomN();
    }
    else {
        cout << "Didn't get that.";
    }
}

void roomN(){
    cout << rN;
}
