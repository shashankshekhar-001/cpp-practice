#include<iostream>
using namespace std;
int main(){
    int temp;
    int size=10;
    int age[10];
    cout<<"enter 10 integers :";
    for(int i=0;i<10;i++){
        cin>>age[i];
    }
    cout<<"your array is"<<endl;
    for(int i=0;i<10;i++){
        
        cout<<age[i]<<"\n";
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(age[j]>age[j+1]){

                temp=age[j];
                age[j]=age[j+1];
                age[j+1]=temp;

            }
        }
    }
    cout<<"your array is"<<endl;
    for(int i=0;i<10;i++){
        
        cout<<age[i]<<"\n";
    }

  return 0;  
}