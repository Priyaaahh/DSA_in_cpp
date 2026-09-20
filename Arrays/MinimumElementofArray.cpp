#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }
    int min = INT_MAX;
    
    for(int i = 0; i <= n-1; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<"The minimum element of the given array is: "<<min<<endl;
}