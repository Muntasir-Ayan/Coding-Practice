//fahrenheit to celsius

#include<iostream>
using namespace std;

int main(){
    int fahrenheit, celsius;
    cin>>fahrenheit;
    celsius = (fahrenheit-32)*5/9.0;
    cout<<"the temprature is: "<<celsius<<" c";

}