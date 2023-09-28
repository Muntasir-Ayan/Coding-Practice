#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    int val =0;
    while (i<=n)
    {
        /* code */
        int j =1;
        while (j<=n)
        {
            /* code */
            char ch = 'A'+val;
            cout<< ch;
            j++;
            val++;
        }
        cout<< endl;
        i++;
        
    }
    
}