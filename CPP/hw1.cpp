#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>> ch;

    // if(ch>96 && ch<122){
    //     cout<<"This is Lowercase letter"<<endl;
    // }
    // else if (ch>64 && ch<97)
    // {
    //      cout<<"This is Uppercase letter"<<endl;
    // }
    // else if(ch>47 && ch<58){
    //     cout<< "this is a number"<<endl;

    // }
    // else{
    //     cout<<"Specail Character.";
    // }


// another method



    if(ch>='a' && ch<='z'){
        cout<<"This is Lowercase letter"<<endl;
    }
    else if (ch>='A' && ch<='Z')
    {
         cout<<"This is Uppercase letter"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<< "this is a number"<<endl;

    }
    else{
        cout<<"Specail Character.";
    }
}