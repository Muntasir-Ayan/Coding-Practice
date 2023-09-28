#include<iostream>
using namespace std;
int main(){
    int n =4;
    int i = 1;
    while (i<=n)
    {
        int j =1;
        int k =1;
       while (j<=i-1)
       {
        cout <<"-";
        j++;
        
       }
       int start = i;
       while (k<=n-i+1)
       {
        cout<<start;
        k++;
        start++;
        
       }
       cout<<endl;
       i++;
    }
    
}

