#include<iostream>
using namespace std;

int main () {
     int temprature;
     char unit;
     int output;
   
        cout<< "enter the temprature and unit ";
        cin>> temprature >> unit;
        
        if(unit=='c'){
            output= (temprature * 9/5) +32;
            cout<< "output - " << output << "Fahrenheit" <<endl;
        }
        else{
            output= (temprature - 32) * 5/9;
            cout<< "output - " << output <<"Celcius" <<endl;
        }
     

}

