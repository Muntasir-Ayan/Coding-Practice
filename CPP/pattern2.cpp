#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    
    while (i<=n)
    {
        int j=1;
        /* code */
        while (j<=n)
        {
            /* code */
            char ch = 'A'+j-1;
            cout<<ch;
            j++;
        }
        cout << endl;
        i++;
        
    }
    
}