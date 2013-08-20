#include <iostream>

using namespace std;

/*Room data goes up here.*/

string r1 = "You wake up in a small room.\nThere are doors to the WEST, EAST, and NORTH.\nYou can see 3 COINS, a KNIFE, and a STICK on the floor.";

string rN = "This is a dead end.\nThe doorway seals shut.\nThere is no way out.\nGAME OVER";

/*Room Functions go here*/

int room1();
int roomN();

/*Store inputs here.*/

string input;

int main()
{
    int room1();

    /*cout << r1;

    cin >> input;

    if (input=="north" || "NORTH" || "n" || "N")
        {
            cout << rN;
        }
    else;
        {
            cout << "I didn't get that." << endl;
        }*/

    return 0;
}

int room1(){
    cout << r1;
    cin >> input;

    return 0;
}
