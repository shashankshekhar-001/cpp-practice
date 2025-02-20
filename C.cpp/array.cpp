#include<iostream>
using namespace std;
int main(){
    /*int age[10]={12,34,45,78,88,56,22,65,77,90};
    for(int i=0;i<10;i++){
        cout<<age[i]<<endl;
    }*/
    int age[10];
    cout<<"enter 10 integers :";
    for(int i=0;i<10;i++){
        cin>>age[i];
    }
    cout<<"your array is"<<endl;
    for(int i=0;i<10;i++){
        
        cout<<age[i]<<"\n";
    }
    
  return 0;  
}