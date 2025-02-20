
    /* for(int i=1;i<=10;i++){
        if(i==8){
           continue;
        }
        cout <<i<<endl;
    }

    cout<<"loop broken";*/


       /* for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
            cout<<i<<j<<endl;
            }
        }

    srand(time(NULL));
    int b=rand()%6;
    cout<<b;
*/

#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
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

    return 0;
}
