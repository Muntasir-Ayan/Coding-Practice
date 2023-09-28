#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    int res = 0;
    while (i<=n)
    {
        /* code */
        res +=i;
        i++;
    }
    cout << "the result of the Sum: "<<res<<endl;

    // using formula sum = n/2*(a+n)
    int a = 1;
    int result =(n/2.0)*(a+n);
    cout<<"The sum is (using formula): "<<result<<endl;
}