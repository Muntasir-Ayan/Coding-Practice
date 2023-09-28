#include<iostream>
using namespace std;

bool search(int arr[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key){
            return true;
        }
    }
    return false;
    

}
int main(){
    int arr[10]={2,4,5,7,8,-3,22,28,69,20};
    int key;
    cout<< "Enter the element search for: "<<endl;
    cin>>key;
    bool found =search(arr,10,key);
    if(found){
        cout<< "the value "<< key <<" is present";
    }
    else{
        
        cout<< "the value "<< key <<" is absent";
    }

}