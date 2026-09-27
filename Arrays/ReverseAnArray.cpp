#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int left = 0;
    int right = n-1;
    while(left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    cout<<"The reversed array is: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}