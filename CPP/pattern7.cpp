#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i =1;
    
    while (i<=n)
    {
       int j =1;
       char ch = 'A'+i-j;
       while (j<=4)
       {
        cout << ch << " ";
        ch = ch+1;
        j++;
       }
       cout<< endl;
       i++;
       
    }
    
} 
// 4
// A B C D
// B C D E
// C D E F
// D E F G