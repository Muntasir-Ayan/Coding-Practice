#include<iostream>
using namespace std;

int getMax(int arr[],int n){
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        maxi = max(maxi,arr[i]);
        
        //without libarary fuction
        // if(arr[i]>maxi){
        //     maxi = arr[i];
        // }
    }
    cout<<"Maximum value of This array: "<<maxi<<endl;
    return 0;

}
int getMin(int arr[],int n){
    int min = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Minimum value of This array: "<<min<<endl;
    return 0;

}
void printArray(int arr[],int size){
    cout<<"Printing The array: "<<endl;
    for(int i =0; i<size;i++){
        cout<<arr[i]<<" ";
 
    }
    cout<<endl;
}

int main(){
    int size;
    cin>> size;
    int arr[1000];
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }
    printArray(arr,size);
    getMax(arr,size);
    getMin(arr,size);
}