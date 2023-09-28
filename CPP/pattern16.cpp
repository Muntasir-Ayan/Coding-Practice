#include<iostream>
using namespace std;
int main(){
    int n =5;
    int i =1;
    int temp = n;
    while (i<=n)
    {
        int j = 1;
        while (j<=n-i+1)
        {
            cout<<j<<" ";
            j++;
        }
        
        int k = 2;
        while (k<=i)
        {
            cout<<"*"<<" ";
            k++;
        }
        int l = 2;
        while (l<=i)
        {
            cout<<"*"<<" ";
            l++;
        }
        int start = temp-i+1;
        while (start)
        {
            cout<<start<<" ";
            start--;
            
        }
        
        cout<<endl;
        i++;
    }
    // int a = 5;
    // while(a){
    //     cout<<"this is number: "<<a<<endl;
    //     a--;
    // }
    
}

/*
1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/