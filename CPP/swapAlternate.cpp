#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[],int n){
    for(int i=0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
    printArray(arr,n);
}

int main(){
    int even[6]={4,2,5,3,6,7};
    int odd[5]={2,5,6,8,4};
    cout<<"Before even swap: "<<endl;
    printArray(even,6);
    cout<< "After swap: "<<endl;
    swapAlternate(even,6);
    cout<<"Before odd swap: "<<endl;
    printArray(odd,5);
    cout<< "After swap: "<<endl;
    swapAlternate(odd,5 );

}