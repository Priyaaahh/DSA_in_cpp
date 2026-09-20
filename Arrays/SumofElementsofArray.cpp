#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0; i <= n-1; i++){
        sum += arr[i];
    }
    cout<<"The sum of elements of given array is: "<<sum<<endl;
}