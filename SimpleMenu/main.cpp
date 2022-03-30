#include <iostream>

using namespace std;

// FUNCTION PROTOTYPES
// these are defined below
int option1();
int option2();
int option3();

// Print Menu
// Get Input
// If valid, do a thing
// If not valid, repeat
int main()
{
    int userChoice = 0;
    const int EXIT = 4; // This menu option always quits
    bool keepGoing = true;
    while (keepGoing) {

        cout << "Simple Menu" << endl;
        cout << "1. Option 1" << endl;
        cout << "2. Option 2" << endl;
        cout << "3. Option 3" << endl;
        cout << "4. Exit" << endl;
        cout <<"Choose: ";
        cin >> userChoice;
        //cout << "You picked " << userChoice << endl;
        // Take action based on menu
        if (userChoice == 1) {
            int result = option1();
            cout << "Option 1 returned: " << result << endl;
        }
        else if (userChoice == 2) {
            int result = option2();
            cout << "Option 2 returned: " << result << endl;
        }
        else if (userChoice == 3) {
            int result = option3();
            cout << "Option 3 returned: " << result << endl;
        }
        else if (userChoice == EXIT) {
            cout << "Exiting ... goodbye." << endl;
            keepGoing = false; // exit the loop
        }
        else {
            // not any of the above options
            cout << "Invalid input, please try again." << endl;
            // TODO clear the input buffer, just in case we get stuck
            //cin.ignore();
        }
    }
    return 0;
}

//// FUNCTION DEFINITIONS
// Other functions are written below
int option1() {
    // Just demonstrate calling and returning
    cout << "You picked Option 1." << endl;
    return 1;
}

int option2() {
    // Just demonstrate calling and returning
    cout << "You picked Option 2." << endl;
    return 2;
}

int option3() {
    // Just demonstrate calling and returning
    cout << "You picked Option 3." << endl;
    return 3;
}
