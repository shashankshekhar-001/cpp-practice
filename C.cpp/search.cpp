#include<iostream>
using namespace std;
void check(int age[]){
    int input,i;
    cout<<"enter a number"<<endl;
    cin>>input;
    for(i=0;i<10;i++){
        if(input==age[i]){
            cout<<"match found at :"<< i <<endl;
            break;
        }
    }

    
    if(i==10){
        cout<<"match not found"<<endl;
    }
}
int main(){
    
    int age[10]={1,2,3,4,5,6,7,8,9,0};
    check(age);
    
  return 0;  
}