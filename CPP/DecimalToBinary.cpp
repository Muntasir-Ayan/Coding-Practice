#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n ;
    int i = 0;
    int bit;
    int ans = 0;
    while (n!=0)
    {
        bit = n & 1;
        ans = (bit * pow(10,i))+ans;
        i++;
        n = n>>1;

    }
    cout << "The Binary Value of the Number: "<<ans<<endl;
    

}