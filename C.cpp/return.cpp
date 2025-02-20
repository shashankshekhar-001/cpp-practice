#include<iostream>
using namespace std;
int add (int a,int b){
    return a+b;
}
int main(){
    int a,b,sum;
    cout<<"enter to number to add"<<endl;
    cin>>a>>b;
    sum=add(a,b);
    cout<<sum;
}