#include<iostream>
using namespace std;

void happy(string name){
    cout<<"Happy Birthday to you Dear "<< name <<endl;
    cout<<"Happy Birthday to you Dear "<< name <<endl;
    cout<<"Happy Birthday to you Dear "<< name <<endl;
}

int main(){
 string name;
 for(int i=0;i<5;i++){
    cout<<"enter first name "<< endl;
    getline(cin,name);
    happy(name);
 }
}