#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    int temp =n;
    while (i<=n) 
    {
        int j =1;
        while (j<=i)
        {
            char ch = 'A' + temp +j-i-1;
            cout<< ch<<" " ;
            j++;
        }
        cout << endl;
        i++;
        
        /* code */
    }
    
}
// 4
// D
// C D
// B C D
// A B C D