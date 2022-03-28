#include <iostream>

using namespace std;

// Print Menu
// Get Input
// If valid, do a thing
// If not valid, repeat


int main()
{
    int userChoice = 0;
    bool keepGoing = true;
    while (keepGoing) {

        cout << "Simple Menu" << endl;
        cout << "1. Option 1" << endl;
        cout << "2. Exit" << endl;
        cout <<"Choose: ";
        cin >> userChoice;
        //cout << "You picked " << userChoice << endl;
        // Take action based on menu
        if (userChoice == 1) {
            cout << "You picked Option 1." << endl;
        }
        else if (userChoice == 2) {
            cout << "Exiting ... goodbye." << endl;
            keepGoing = false; // exit the loop
        }
        else {
            // not any of the above options
            cout << "Invalid input, please try again." << endl;
        }
    }
    return 0;
}
