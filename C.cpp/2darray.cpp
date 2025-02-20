#include<iostream>
using namespace std;
int main(){
    int age[3][3];
    cout<<"enter 9 integers :";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<"enter value at "<<i<<j;
           cin>>age[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<age[i][j]<<" ";  
        }
        cout<<"\n"; 
    }
    
  return 0;  
}