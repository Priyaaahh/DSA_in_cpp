#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }
    // print the negative elements of the array
    cout<<"The negative elements of the array is as follows: ";
    for(int i = 0; i <= n-1; i++){
        if(arr[i] < 0){
            cout<<arr[i]<<" ";
        } 
    }
}