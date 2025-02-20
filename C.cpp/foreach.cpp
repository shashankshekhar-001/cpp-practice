#include<iostream>
using namespace std;
void print(int arr[]){
    for(int i=0;i<5;i++){
        
        cout<<arr[i]<<"\n";
    }
}
int main(){
    int age[5];
    cout<<"enter 5 integers :";
    for(int i=0;i<5;i++){
        cin>>age[i];
    }
    
    print(age);
}