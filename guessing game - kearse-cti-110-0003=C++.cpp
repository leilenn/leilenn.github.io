#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    srand(time(0));   //Seed random number generator
    

    // ashlei kearse-cti-110-0003
    int secret;
    int guess;

    // the numbers range from 1-100 in this game.
    // test case 1: i tested the game to see if the flow chart had no mistakes. i then tried to make a quit option.
    // 
    // test case 2: i tried inputing the quit option and it did not work very well i kept running into an error.
    secret = rand() % 100 + 1;
    guess = 1 - 100;
    cout << "a number guessing game! enter your first number or press Q to quit" << endl;
    while (guess != secret) {
        cin >> guess;
        if (guess > secret) {
            cout << "guess too HIGH" << endl;
        }
        if (guess < secret) {
            cout << "guess too LOW" << endl;
        }
    }
    cout << "correct!" << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
