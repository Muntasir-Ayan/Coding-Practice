#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =0;
    while(i<n){
        int j=0;
        while (j<n)
        {
            /* code */
            char ch = 'A'+j;
            cout<< ch;
            j++;
        }
        cout<< endl;
        i++;
        
    }
}