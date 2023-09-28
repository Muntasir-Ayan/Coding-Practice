#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int i=1;
    int count = 1;
    while (i<=n)
    {
        int j =1;
       while (j<=n-i)
       {
         cout<<"-"<<" ";
         j++;
       }
       int k =1;
       while (k<=i)
       {
        cout << k<<" ";
        k++;
       }
       int l = 2;
       while (l<=i)
       {
        cout<< i-l+1<<" ";
        count++;
        l++;
       }
       
       
       cout << endl;
       i++;
    }
    
}
/*
- - - 1 
- - 1 2 1
- 1 2 3 2 1
1 2 3 4 3 2 1
*/