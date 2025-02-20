#include <iostream>
using namespace std;

void gameGuess(){
    int input;
    bool win = false;
    
    srand(time(NULL));  // Seed random number generator once
    int b = rand() % 10 + 1;  // Generate a random number between 1 and 10

    while (win == false) {  
        cout << "Enter a number between 1 to 10: ";
        cin >> input;
    
        if (input == b) {
            cout << "You won!" << endl;
            win = true;
        } else {
            cout << "Try again!" << endl;
        }
    }
    
}
int main() {
    cout<<"play a game ";
    gameGuess();
    cout<<"play again";
    gameGuess();       
   return 0; 
}
