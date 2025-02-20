#include <iostream>
using namespace std;

void gameGuess(){
   cout<<"no parameter"<<endl;
    
}

void gameGuess(int a,int b){
   cout<<a<<" "<<b<<endl;
    
}
void gameGuess(int a){
    cout<<a <<endl;
}
int main() {
    gameGuess();
    gameGuess(12);
    gameGuess(23,54);
}
