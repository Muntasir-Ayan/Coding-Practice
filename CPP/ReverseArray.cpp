#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}
void ReverseArray(int arr[], int n){
    int start =0;
    int end = n-1;
    // for (int i = 0; i < n; i++)
    // {
    //     if(star)
    // }
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    printArray(arr,n);
    
    
}
int main(){
     int arr[5]={2,3,4,5,6};
     int arr1[6]={2,3,4,5,6,7};
     cout<< "Before Swapping :"<<endl;
     printArray(arr,5);
     cout<< "Before Swapping :"<<endl;
     ReverseArray(arr,5);
     cout<< "Before Swapping :"<<endl;
     printArray(arr1,6);
     cout<< "Before Swapping :"<<endl;
     ReverseArray(arr1,6);
}