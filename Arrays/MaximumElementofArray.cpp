#include<iostream>
#include<climits>
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
    int max = INT_MIN;
    int i;
    for(i = 0; i <= n-1; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"The maximum element of the given array is: "<<max<<endl;
}